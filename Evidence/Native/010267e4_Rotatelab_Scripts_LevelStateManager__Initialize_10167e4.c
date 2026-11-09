/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$Initialize
void Rotatelab_Scripts_LevelStateManager__Initialize (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$Initialize
   void Rotatelab_Scripts_LevelStateManager__Initialize (Rotatelab_Scripts_LevelStateManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager__Initialize_10167e4(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010268a8 + 0x10267f8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010268ac + 0x102680c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010268b0 + 0x1026818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010268b4 + 0x1026824));
    *pcVar6 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010268b8 + 0x1026838));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(iVar3 + 0x58) + 0xc);
  if (iVar7 != 0) {
    iVar3 = *(int *)(iVar7 + 0xc);
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (0 < iVar3) {
      System_Array__Clear_2b96cdc(*(undefined4 *)(iVar7 + 8),0,iVar3,0);
    }
    pcVar6 = (char *)(_UNK_010269b4 + 0x10268d0);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010269b8 + 0x10268e4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010269bc + 0x10268f0));
      *pcVar6 = '\x01';
    }
    Rotatelab_Scripts_LevelStateManager__StopCheckingLevelState_1016b14(param_1);
    uVar4 = Rotatelab_Scripts_LevelStateManager__CheckFailSequenceCoroutine_1016b84(param_1);
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    thunk_FUN_00ec5080();
    if (*(int *)(**(int **)(_UNK_010269c0 + 0x1026934) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar4,0);
    piVar8 = *(int **)(_UNK_010269c4 + 0x1026964);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      iVar7 = *piVar8;
    }
    if (*(int *)(*(int *)(iVar7 + 0x5c) + 0x18) <= iVar3) {
      uVar4 = Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_1016bfc(param_1);
      uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
      puVar5 = (undefined4 *)(param_1 + 0x24);
      *puVar5 = uVar4;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

