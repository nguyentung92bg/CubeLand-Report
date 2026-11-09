/* IL2CPP: Rotatelab.Extensions$$RectTransform
UnityEngine_RectTransform_o* Rotatelab_Extensions__RectTransform (UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$RectTransform
   UnityEngine_RectTransform_o* Rotatelab_Extensions__RectTransform (UnityEngine_GameObject_o*
   gameObject, const MethodInfo* method); */

int * Rotatelab_Extensions__RectTransform_fc1b4c(int param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fd1bc4 + 0xfd1b60);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1bc8 + 0xfd1b74));
    *pcVar3 = '\x01';
  }
  if (param_1 != 0) {
    piVar1 = (int *)UnityEngine_GameObject__get_transform_3601c90(param_1,0);
    piVar2 = (int *)0x0;
    if ((piVar1 != (int *)0x0) && (piVar2 = piVar1, *piVar1 != **(int **)(_UNK_00fd1bcc + 0xfd1bac))
       ) {
      piVar2 = (int *)0x0;
    }
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

