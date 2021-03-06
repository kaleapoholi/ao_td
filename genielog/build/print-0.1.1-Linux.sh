#!/bin/sh

# Display usage
cpack_usage()
{
  cat <<EOF
Usage: $0 [options]
Options: [defaults in brackets after descriptions]
  --help            print this message
  --prefix=dir      directory in which to install
  --include-subdir  include the print-0.1.1-Linux subdirectory
  --exclude-subdir  exclude the print-0.1.1-Linux subdirectory
EOF
  exit 1
}

cpack_echo_exit()
{
  echo $1
  exit 1
}

# Display version
cpack_version()
{
  echo "print Installer Version: 0.1.1, Copyright (c) Humanity"
}

# Helper function to fix windows paths.
cpack_fix_slashes ()
{
  echo "$1" | sed 's/\\/\//g'
}

interactive=TRUE
cpack_skip_license=FALSE
cpack_include_subdir=""
for a in "$@"; do
  if echo $a | grep "^--prefix=" > /dev/null 2> /dev/null; then
    cpack_prefix_dir=`echo $a | sed "s/^--prefix=//"`
    cpack_prefix_dir=`cpack_fix_slashes "${cpack_prefix_dir}"`
  fi
  if echo $a | grep "^--help" > /dev/null 2> /dev/null; then
    cpack_usage 
  fi
  if echo $a | grep "^--version" > /dev/null 2> /dev/null; then
    cpack_version 
    exit 2
  fi
  if echo $a | grep "^--include-subdir" > /dev/null 2> /dev/null; then
    cpack_include_subdir=TRUE
  fi
  if echo $a | grep "^--exclude-subdir" > /dev/null 2> /dev/null; then
    cpack_include_subdir=FALSE
  fi
  if echo $a | grep "^--skip-license" > /dev/null 2> /dev/null; then
    cpack_skip_license=TRUE
  fi
done

if [ "x${cpack_include_subdir}x" != "xx" -o "x${cpack_skip_license}x" = "xTRUEx" ]
then
  interactive=FALSE
fi

cpack_version
echo "This is a self-extracting archive."
toplevel="`pwd`"
if [ "x${cpack_prefix_dir}x" != "xx" ]
then
  toplevel="${cpack_prefix_dir}"
fi

echo "The archive will be extracted to: ${toplevel}"

if [ "x${interactive}x" = "xTRUEx" ]
then
  echo ""
  echo "If you want to stop extracting, please press <ctrl-C>."

  if [ "x${cpack_skip_license}x" != "xTRUEx" ]
  then
    more << '____cpack__here_doc____'
LICENSE
=======

This is an installer created using CPack (https://cmake.org). No license provided.


____cpack__here_doc____
    echo
    echo "Do you accept the license? [yN]: "
    read line leftover
    case ${line} in
      y* | Y*)
        cpack_license_accepted=TRUE;;
      *)
        echo "License not accepted. Exiting ..."
        exit 1;;
    esac
  fi

  if [ "x${cpack_include_subdir}x" = "xx" ]
  then
    echo "By default the print will be installed in:"
    echo "  \"${toplevel}/print-0.1.1-Linux\""
    echo "Do you want to include the subdirectory print-0.1.1-Linux?"
    echo "Saying no will install in: \"${toplevel}\" [Yn]: "
    read line leftover
    cpack_include_subdir=TRUE
    case ${line} in
      n* | N*)
        cpack_include_subdir=FALSE
    esac
  fi
fi

if [ "x${cpack_include_subdir}x" = "xTRUEx" ]
then
  toplevel="${toplevel}/print-0.1.1-Linux"
  mkdir -p "${toplevel}"
fi
echo
echo "Using target directory: ${toplevel}"
echo "Extracting, please wait..."
echo ""

# take the archive portion of this file and pipe it to tar
# the NUMERIC parameter in this command should be one more
# than the number of lines in this header file
# there are tails which don't understand the "-n" argument, e.g. on SunOS
# OTOH there are tails which complain when not using the "-n" argument (e.g. GNU)
# so at first try to tail some file to see if tail fails if used with "-n"
# if so, don't use "-n"
use_new_tail_syntax="-n"
tail $use_new_tail_syntax +1 "$0" > /dev/null 2> /dev/null || use_new_tail_syntax=""

tail $use_new_tail_syntax +147 "$0" | gunzip | (cd "${toplevel}" && tar xf -) || cpack_echo_exit "Problem unpacking the print-0.1.1-Linux"

echo "Unpacking finished successfully"

exit 0
#-----------------------------------------------------------
#      Start of TAR.GZ file
#-----------------------------------------------------------;

� ྟ[ �[p[G��#?$'���y�I ��BR�*�d�j����I����Ȗ�W���)���m�'�c��P�(��(�C�w���Bẍ́>�uzp[��^��������ch�����;����]���?_��ɋ�9�@ ��ب�@c��6HuS]C�Vg8�^[_���T�T����TG��s�1&�L6��]������x4�Q�L�ӎ�:�#����N���"�7���3�s��`C����6�����t��t��7H��������.M��e�M���V����|ZH3q��W�Mܶb��{ݲ&D�̯��ͮ0�����]�-���~��z�����W�����Q�c��Ⱥ\��g�Qv}�Y����-ԯ�,^|B������'�4��YC���k�>���
\r�����g˾zl��o����nR��'�h��*�Uѿj�������y�CGVW]�;�k6}k������ޅ������.��Z�k�����Q��#lLד�>��3�!��x?��Q1i��?,�q=>n_E���_���<��qp(�4�n�5bē�,1�"Fg�n#K��3�X�ww["���F�1����?aD�i��CF��kKD2����ɬ�9@�.�Owx��h$��e2f�(���s`WWgk�Q��Oa�����#��fRX���*fu�(ú��a��9����d�'V����<��6�̆���r>k��S7g��SW#�w��0	�>�	���2��o�̺�����{�H��>
�/��~���B�Xy���:��r�ʹ<0a�3��NV�xS�����cφG缇��ꃢ�����+7����:�_����p�Ʒ����������l���+�����gkhe���ڬ����ݱ�����ã;~ZE�������c;^����̄����+f(��Tܟ�ݴ��+Hn��멥�o���*��S�����S-�.��>�gs���������)>�lD����F�Xv�.�����r��:J���#����=D�i�ݞ	�ܧ�^u��3�����\�r�;=G�.��~�N�?�6�v���}O��#B^�m���{idI�dI�dI��)�P|
1��BC����BC�+�'V�{�(C��Q�ᙸAh��6�������ì��f�"���D�L�z���[����\�>�p,]/�^!���~N
]��a���ϋ2��(o��W��1�����ˀ��w��]�om���#I=����6�!�$W����@mS��6X��2:*�j*�eͿ��Y�.������
k�e�Қw[�,�k=�x��ė�n%��+�j+�"��#ǽ�N%���Gȸ��P⫬ߩ���~�2~�T���)#k�󚌯�~�2��Zg2^|�6��0�l��y�W�{��g5��Q�������B?a������y����s�/��/8|/���~�G��2���P�#ܾx^������+�Y�gE=x�r�x=���y����4j�|�e�:�t�����sh7���EqM��9�3�^S����%ҟ�f���?1�+�z��ν��A
�##;d��<Q�ZDS��D�/�0��T:cDr#�?54��ecQ�:��L�t:r؈%���d �����a�b+�T�d�3N��;{B�;��=�,�Ż��L��$�,��~����6��ڳ���p{�zw��Ӯ��ZC]�U;w���5zC�]���3���i63��bOm�2��c�0);�ȭ-61'�g���?sx(�:�6� \%S٘�`2�������(��Hf��������ٴy�P,����R���ұD����D��y���0E/����ǟN�����FӅ��jN���7��y"C�~ª5[2+�CH�t��u�X����ٞ�s����:������!� }��!��9��^nk���Z�]���L���!~�,��Č-���gC�]H�#f�
e��@�D�����7��D�������h{��N�?B
�.����x<���h���~�4/\~/��t�p�\$���{���=���0O������	���>̩���?ħ�� {<~� ���W����ރ�E)�������u�8�+�9����*
�/�}��a��y��q���fyk�����р^��)�����?Ȍ��⧭�x�����v�V%�5���;�(���O���v�w���:�����?'6�3W�_VI��^������o!l�� �����_W[[��?�%���B��?���"��������ɫ���-D�=���S��g�|���0h�����ղ�|���9\<�AO�v�p�M�iaؘo�+p�ۉ�1��#"��5�O.G~-��i\¢��ai0�p1=�&���������`���>��-�"1�q�I1W���K?�ު�?p���,����x=��,vޛ����Ty��W�^NZ�=2��.�+�P���Y������y�ӓ?���?]���ӌ�t�M?�8L�k��t)ӻ�:o����7��oq���;���u�Cu9�ǈ:�tasu>	�<ּ��� �7�n�����b���y|dR������緼�E�1����7��]��/�~B|�&�-����$ʃ�F��+څ���W�����)j�T�!�Y)#�	\`h	���X6�<�T�;�E�/�ً�"�#�k�"����3�`5B]�Wѫh<i�2��ݖ��dƘ����sLf��<�)�]$6��/v@��$�u�� ��m</�9�����/�/%;��~f����gq;�̾���2{���p�ya����6��|<�߻O$���0�Z��j�l��ud];5��/�2�S���+�.����?���jOw������S��gf�{��+.u1�؊)��Ū�ʯ�C}~g���w|���pLa>ܫ݋�ý��7��.��{�rQ|�h=&��P�ù(>��Ƈ��T��"�j>\�҉����谌}��|>��,S�n5	�=,��$̽��㷲����
�=2s5wdvk,�:n��R
̬��7X�W�����3�����)f^y���cS������C�Btn/(cc>��齝cg:Ǟ���,_���l&Ū��tV���O��s]cg�i�5��Ni�K~�{��ѷ�]��>dLM��)���*�į�06O�l<�Lݭ�ri=I�Ǩz}ld���\������e{�/�)Me2qj���t�P$�`�Ŏݡް�^*I�����"�8�a��aW�A�ÞPϵ�q�Gff���Y����<��P͞�OP�K�Y:�ߧ�:�P��N�5'ޣ��pKSx�2)œ<��|����IzΪy��O�L���˜(�|X�o�����V���Vo���:��xy�w��*���m�ao�{��%�my!��V�N��}����g�0C�Q�u�Q�:J���]LBñ�"��@�o֏���L����9
�E�߇g���EG1�g-�ŉ�s@h'^�Q���R��	�1�������]�;�|��_)<'�V�=���:��B�D	Z��^n~P�����A�J��d�Aw(�
k��x���mͧ�{�u �U����e�:���s��W'ĉ��V�s��+�5��M*�UV�A�W�i%~��_��k����Q%�N�?hZ�'�q��CM���h�����D��7�D�������8޿M>Q��2��x<o�@��|��y�s�D���t�ZƿM��@�y��W����zη��g����ᴨ�h��*^��if�x�7k&o��FM��p�]���y�!�����+4u��C��]����4u��'��Y�|���9�A���w���y��Uy��.u?�9�m.ul�!_�w��bٟt+�'�ȿ�����_D�Bi$3���P�i[*�S��P>�'��P�n�̖=�f&�^6>�BL0��b�a��vn�F.��J{����;�W���_Kd~~o�#{�o�E���.ŏa�;?�W��	�T��!2?�\�[��G��W����YA4`x��'2?�f�~��O�"�� ��u�AX<d�A�yx����Bd~����k��'2?�'�K��Ɛ?&�t#{�O��s�R��O!x>��A�&��<�xt)~�A���%��u����ԩ��?�w@W���������T�=�W=Id~�˓���5��Y�?Z�俈�O+���m����:���i�OÜ���"�Ok.�?��!�m����� �D�A^$?�LS���%?mD��>�*b>k�O���c���O�I$��?���%Y�%Y�%97�'���� P  