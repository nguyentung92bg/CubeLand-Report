/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$GetNextCycleStart
System_DateTime_o Rotatelab_CloudRush_CloudRushController__GetNextCycleStart (System_DateTime_o time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$GetNextCycleStart
   System_DateTime_o Rotatelab_CloudRush_CloudRushController__GetNextCycleStart (System_DateTime_o
   time, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__GetNextCycleStart_10ddbf4
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint in_fpscr;
  undefined8 uVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010ede5c + 0x10edc14);
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ede60 + 0x10edc30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ede64 + 0x10edc3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ede68 + 0x10edc48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ede6c + 0x10edc54));
    *pcVar4 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar3 = *(int *)(**(int **)(_UNK_010ede70 + 0x10edc6c) + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar3 = extraout_r1;
  }
  Rotatelab_Extensions__GetStartOfWeek_fc341c(&uStack_40,iVar3,param_3,param_4,0);
  uVar1 = uStack_3c;
  uVar6 = uStack_40;
  piVar9 = *(int **)(_UNK_010ede74 + 0x10edcac);
  uStack_2c = uStack_3c;
  uStack_30 = uStack_40;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Date_2b49a20(&uStack_40,&uStack_28,0);
  System_DateTime__op_Subtraction_2b4c068
            (&uStack_38,extraout_r1_00,uStack_40,uStack_3c,uVar6,uVar1,0);
  if (*(int *)(**(int **)(_UNK_010ede78 + 0x10edd00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = System_TimeSpan__get_Days_2b89b68(&uStack_38,0);
  iVar8 = 4;
  piVar5 = *(int **)(_UNK_010ede7c + 0x10edd30);
  while( true ) {
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar5;
    }
    if (**(int **)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = iVar8 - 4;
    if (*(int *)(**(int **)(iVar2 + 0x5c) + 0xc) <= (int)uVar7) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar10 = 0x401c000000000000;
      goto LAB_010ede30;
    }
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar5;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (iVar3 < *(int *)(iVar2 + iVar8 * 4)) break;
    iVar8 = iVar8 + 1;
  }
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar6 = *(undefined4 *)(iVar3 + iVar8 * 4);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar10 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
LAB_010ede30:
  System_DateTime__AddDays_2b48944
            (&uStack_40,&uStack_30,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  return;
}

