/* IL2CPP: Rotatelab.SoLevelData$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
void Rotatelab_SoLevelData__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize (Rotatelab_SoLevelData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
   void Rotatelab_SoLevelData__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
   (Rotatelab_SoLevelData_o* __this, const MethodInfo* method); */

void Rotatelab_SoLevelData__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_fdd228
               (int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  pcVar3 = (char *)(_UNK_00fed324 + 0xfed23c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed328 + 0xfed250));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_00fed32c + 0xfed270),
                         *(undefined4 *)(*(int *)(param_1 + 0x88) + 0xc));
    piVar8 = (int *)(param_1 + 0x90);
    *piVar8 = iVar1;
    thunk_FUN_00ec5080(piVar8,iVar1);
    uVar4 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x88) + 0xc) <= (int)uVar4) break;
      iVar1 = *piVar8;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(param_1 + 0x88);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar2 = *(uint *)(iVar1 + 0xc);
      uVar6 = *(undefined4 *)(iVar5 + uVar4 * 4 + 0x10);
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      puVar7 = (undefined4 *)(iVar1 + uVar4 * 4 + 0x10);
      *puVar7 = uVar6;
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      thunk_FUN_00ec5080(puVar7,uVar6);
      uVar4 = uVar4 + 1;
    }
  }
  return;
}

