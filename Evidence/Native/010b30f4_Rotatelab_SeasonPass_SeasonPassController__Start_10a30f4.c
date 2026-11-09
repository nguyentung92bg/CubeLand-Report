/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$Start
void Rotatelab_SeasonPass_SeasonPassController__Start (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$Start
   void Rotatelab_SeasonPass_SeasonPassController__Start
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__Start_10a30f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  int aiStack_1c [3];
  
  pcVar7 = (char *)(_UNK_010b3234 + 0x10b310c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b3238 + 0x10b3120));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b323c + 0x10b312c));
    *pcVar7 = '\x01';
  }
  if (*(char *)(param_1 + 0x31) == '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_010b3240 + 0x10b314c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  piVar8 = *(int **)(_UNK_010b3244 + 0x10b317c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  if (iVar2 <= *(int *)(*(int *)(iVar3 + 0x5c) + 0x24)) {
    return;
  }
  Rotatelab_SeasonPass_SeasonPassController__CheckClaimedRewards_10a330c(param_1);
  *(undefined1 *)(param_1 + 0x31) = 0;
  Rotatelab_SeasonPass_SeasonPassController__CheckSystem_10a34ec(param_1);
  uVar1 = Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine_10a3750(param_1);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassManager__Init_10a37c8(*(int *)(param_1 + 0x10));
  aiStack_1c[0] = 0;
  aiStack_1c[0] =
       Rotatelab_SeasonPass_SeasonPassController__GetUnclaimedRewardCount_10a557c(param_1);
  iVar2 = *(int *)(param_1 + 0x18);
  if (aiStack_1c[0] < 1) {
    pcVar7 = (char *)(_UNK_010b44f4 + 0x10b444c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b44f8 + 0x10b4460));
      *pcVar7 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_010b44fc + 0x10b4474) + 0x5c);
    puVar5 = puVar4 + 2;
    puVar6 = puVar4 + 1;
  }
  else {
    pcVar7 = (char *)(_UNK_010b4500 + 0x10b4404);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4504 + 0x10b4418));
      *pcVar7 = '\x01';
    }
    iVar3 = *(int *)(**(int **)(_UNK_010b4508 + 0x10b442c) + 0x5c);
    puVar5 = (undefined4 *)(iVar3 + 0x14);
    puVar6 = (undefined4 *)(iVar3 + 0x10);
    puVar4 = (undefined4 *)(iVar3 + 0xc);
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,*puVar6,*puVar5,0);
  piVar8 = *(int **)(param_1 + 0x1c);
  uVar1 = System_Int32__ToString_2b6b9ec(aiStack_1c,0);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x2b4));
  return;
}

