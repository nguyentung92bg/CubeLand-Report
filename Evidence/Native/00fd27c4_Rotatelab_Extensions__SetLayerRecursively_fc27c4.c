/* IL2CPP: Rotatelab.Extensions$$SetLayerRecursively
void Rotatelab_Extensions__SetLayerRecursively (UnityEngine_GameObject_o* gameObject, int32_t layer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetLayerRecursively
   void Rotatelab_Extensions__SetLayerRecursively (UnityEngine_GameObject_o* gameObject, int32_t
   layer, const MethodInfo* method); */

void Rotatelab_Extensions__SetLayerRecursively_fc27c4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_00fd2840 + 0xfd27dc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2844 + 0xfd27f0));
    *pcVar4 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_GameObject__get_transform_3601c90(param_1,0);
  if (*(int *)(**(int **)(_UNK_00fd2848 + 0xfd2820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_00fd2934 + 0xfd2864);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2938 + 0xfd2878));
    *pcVar4 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__set_layer_3601f44(iVar2,param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Transform__get_childCount_3616bd8(iVar1,0);
  if (-1 < iVar2 + -1) {
    piVar5 = *(int **)(_UNK_00fd293c + 0xfd28e8);
    do {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = iVar2 + -1;
      uVar3 = UnityEngine_Transform__GetChild_3617760(iVar1,iVar2,0);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__SetLayerRecursively_fc284c(uVar3,param_2);
    } while (0 < iVar2);
  }
  return;
}

