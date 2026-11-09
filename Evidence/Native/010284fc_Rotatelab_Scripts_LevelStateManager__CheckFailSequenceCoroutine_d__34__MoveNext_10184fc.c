/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<CheckFailSequenceCoroutine>d__34$$MoveNext
bool Rotatelab_Scripts_LevelStateManager__CheckFailSequenceCoroutine_d__34__MoveNext (Rotatelab_Scripts_LevelStateManager__CheckFailSequenceCoroutine_d__34_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<CheckFailSequenceCoroutine>d__34$$MoveNext
   bool Rotatelab_Scripts_LevelStateManager__CheckFailSequenceCoroutine_d__34__MoveNext
   (Rotatelab_Scripts_LevelStateManager__CheckFailSequenceCoroutine_d__34_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_LevelStateManager__CheckFailSequenceCoroutine_d__34__MoveNext_10184fc(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  
  pcVar4 = (char *)(_UNK_01028760 + 0x1028514);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028764 + 0x1028528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028768 + 0x1028534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102876c + 0x1028540));
    *pcVar4 = '\x01';
  }
  if (3 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  switch(*(uint *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto code_r0x01028714;
  case 1:
    *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
code_r0x010285bc:
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_LevelStateManager__IsLevelStuck_101738c(iVar5);
    fVar2 = *(float *)(param_1 + 0x14);
    if (iVar1 != 0) {
      fVar6 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(float *)(param_1 + 0x14) = fVar2 - fVar6;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      uVar3 = 2;
      goto code_r0x010286dc;
    }
    break;
  case 2:
    fVar2 = *(float *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (0.0 < fVar2) goto code_r0x010285bc;
    break;
  case 3:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto code_r0x01028638;
  }
  if (fVar2 <= 0.0) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__SetFailSearchState_1016a58(iVar5,1);
    *(undefined4 *)(param_1 + 0x18) = 0;
code_r0x01028638:
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_LevelStateManager__IsLevelStuck_101738c(iVar5);
    if (iVar1 != 0) {
      fVar6 = *(float *)(param_1 + 0x18);
      fVar2 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
      fVar6 = fVar6 + fVar2;
      uVar3 = **(undefined4 **)(&UNK_01028688 + _UNK_01028774);
      *(float *)(param_1 + 0x18) = fVar6;
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar3);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar2 = (float)Rotatelab_Networking_SatoriFlag_float___op_Implicit_1a88db8
                               (*(undefined4 *)(iVar1 + 0x60),
                                **(undefined4 **)(&UNK_010286ac + _UNK_01028778));
      if (fVar2 <= fVar6) {
        if (iVar5 != 0) {
          Rotatelab_Scripts_LevelStateManager__TriggerLevelFailure_1017304(iVar5);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      uVar3 = 3;
code_r0x010286dc:
      *(undefined4 *)(param_1 + 8) = uVar3;
      return 1;
    }
    Rotatelab_Scripts_LevelStateManager__SetFailSearchState_1016a58(iVar5,0);
  }
code_r0x01028714:
  if (*(int *)(**(int **)(&UNK_01028720 + _UNK_01028770) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3dcccccd,0);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar3);
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}

