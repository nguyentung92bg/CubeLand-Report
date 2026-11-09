/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$GetStartOfCycle
System_DateTime_o Rotatelab_CloudRush_CloudRushController__GetStartOfCycle (System_DateTime_o time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$GetStartOfCycle
   System_DateTime_o Rotatelab_CloudRush_CloudRushController__GetStartOfCycle (System_DateTime_o
   time, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__GetStartOfCycle_10dced0
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  uint in_fpscr;
  undefined8 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_010ed15c + 0x10ecef0);
  uStack_30 = param_3;
  uStack_2c = param_4;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed160 + 0x10ecf0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed164 + 0x10ecf18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed168 + 0x10ecf24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed16c + 0x10ecf30));
    *pcVar5 = '\x01';
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iVar4 = *(int *)(**(int **)(_UNK_010ed170 + 0x10ecf48) + 0x74);
  if (iVar4 == 0) {
    FUN_00ec3934();
    iVar4 = extraout_r1;
  }
  Rotatelab_Extensions__GetStartOfWeek_fc341c(&uStack_48,iVar4,param_3,param_4,0);
  uVar1 = uStack_44;
  uVar9 = uStack_48;
  piVar8 = *(int **)(_UNK_010ed174 + 0x10ecf88);
  uStack_34 = uStack_44;
  uStack_38 = uStack_48;
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Date_2b49a20(&uStack_48,&uStack_30,0);
  System_DateTime__op_Subtraction_2b4c068
            (&uStack_40,extraout_r1_00,uStack_48,uStack_44,uVar9,uVar1,0);
  if (*(int *)(**(int **)(_UNK_010ed178 + 0x10ecfdc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = System_TimeSpan__get_Days_2b89b68(&uStack_40,0);
  piVar7 = *(int **)(_UNK_010ed17c + 0x10ed008);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar9 = *(undefined4 *)(iVar2 + 0x10);
  iVar2 = 5;
  while( true ) {
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    if (**(int **)(iVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = iVar2 - 4;
    if (*(int *)(**(int **)(iVar3 + 0x5c) + 0xc) <= (int)uVar6) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar10 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      System_DateTime__AddDays_2b48944
                (&uStack_48,&uStack_38,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
      *param_1 = uStack_48;
      param_1[1] = uStack_44;
      return;
    }
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    if (iVar3 == 0) break;
    if (*(uint *)(iVar3 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (*(int *)(iVar3 + iVar2 * 4) <= iVar4) {
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar7;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar9 = *(undefined4 *)(iVar3 + iVar2 * 4);
    }
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

