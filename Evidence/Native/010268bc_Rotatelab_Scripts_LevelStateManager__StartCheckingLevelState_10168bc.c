/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$StartCheckingLevelState
void Rotatelab_Scripts_LevelStateManager__StartCheckingLevelState (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$StartCheckingLevelState
   void Rotatelab_Scripts_LevelStateManager__StartCheckingLevelState
   (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager__StartCheckingLevelState_10168bc(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_010269b4 + 0x10268d0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010269b8 + 0x10268e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010269bc + 0x10268f0));
    *pcVar7 = '\x01';
  }
  Rotatelab_Scripts_LevelStateManager__StopCheckingLevelState_1016b14(param_1);
  uVar3 = Rotatelab_Scripts_LevelStateManager__CheckFailSequenceCoroutine_1016b84(param_1);
  uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_00ec5080();
  if (*(int *)(**(int **)(_UNK_010269c0 + 0x1026934) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar3,0);
  piVar8 = *(int **)(_UNK_010269c4 + 0x1026964);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  if (*(int *)(*(int *)(iVar5 + 0x5c) + 0x18) <= iVar4) {
    uVar3 = Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_1016bfc(param_1);
    uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
    puVar6 = (undefined4 *)(param_1 + 0x24);
    *puVar6 = uVar3;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
  return;
}

