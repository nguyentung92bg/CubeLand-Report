/* IL2CPP: Rotatelab.SoLevelData$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
void Rotatelab_SoLevelData__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize (Rotatelab_SoLevelData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
   void Rotatelab_SoLevelData__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
   (Rotatelab_SoLevelData_o* __this, const MethodInfo* method); */

void Rotatelab_SoLevelData__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_fdd330
               (int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  pcVar3 = (char *)(_UNK_00fed440 + 0xfed344);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed444 + 0xfed358));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_00fed448 + 0xfed378),
                         *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xc));
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    thunk_FUN_00ec5080();
    uVar5 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x90) + 0xc) <= (int)uVar5) break;
      iVar4 = *(int *)(param_1 + 0x90);
      piVar6 = *(int **)(param_1 + 0x88);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar4 + uVar5 * 4 + 0x10);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar4 != 0) &&
         (iVar2 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
        uVar1 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar1,0);
      }
      if ((uint)piVar6[3] <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar6[uVar5 + 4] = iVar4;
      thunk_FUN_00ec5080(piVar6 + uVar5 + 4,iVar4);
      uVar5 = uVar5 + 1;
    }
  }
  return;
}

