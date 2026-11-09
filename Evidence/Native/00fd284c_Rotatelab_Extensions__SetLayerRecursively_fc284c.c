/* IL2CPP: Rotatelab.Extensions$$SetLayerRecursively
void Rotatelab_Extensions__SetLayerRecursively (UnityEngine_Transform_o* transform, int32_t layer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$SetLayerRecursively
   void Rotatelab_Extensions__SetLayerRecursively (UnityEngine_Transform_o* transform, int32_t
   layer, const MethodInfo* method); */

void Rotatelab_Extensions__SetLayerRecursively_fc284c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_00fd2934 + 0xfd2864);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2938 + 0xfd2878));
    *pcVar3 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__set_layer_3601f44(iVar1,param_2,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Transform__get_childCount_3616bd8(param_1,0);
  if (-1 < iVar1 + -1) {
    piVar4 = *(int **)(_UNK_00fd293c + 0xfd28e8);
    do {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = iVar1 + -1;
      uVar2 = UnityEngine_Transform__GetChild_3617760(param_1,iVar1,0);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__SetLayerRecursively_fc284c(uVar2,param_2);
    } while (0 < iVar1);
  }
  return;
}

