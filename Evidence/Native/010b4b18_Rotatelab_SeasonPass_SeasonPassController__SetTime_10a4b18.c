/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$SetTime
void Rotatelab_SeasonPass_SeasonPassController__SetTime (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$SetTime
   void Rotatelab_SeasonPass_SeasonPassController__SetTime
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__SetTime_10a4b18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_010b4cf8 + 0x10b4b30);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4cfc + 0x10b4b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4d00 + 0x10b4b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4d04 + 0x10b4b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4d08 + 0x10b4b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4d0c + 0x10b4b74));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_010b4d10 + 0x10b4b8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_28,0);
  uVar1 = uStack_24;
  uVar3 = uStack_28;
  Rotatelab_SeasonPass_SeasonPassController__GetEndOfMonth_10a4d20
            (&uStack_28,extraout_r1,uStack_28,uStack_24);
  System_DateTime__op_Subtraction_2b4c068
            (&uStack_20,extraout_r1_00,uStack_28,uStack_24,uVar3,uVar1,0);
  piVar5 = *(int **)(_UNK_010b4d14 + 0x10b4be8);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar7 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_20,0);
  if (dVar7 < 0.0) {
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar5;
    }
    uStack_20 = **(undefined4 **)(iVar2 + 0x5c);
    uStack_1c = (*(undefined4 **)(iVar2 + 0x5c))[1];
  }
  uVar1 = uStack_1c;
  uVar3 = uStack_20;
  if (*(int *)(**(int **)(_UNK_010b4d18 + 0x10b4c54) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = 0;
  uVar3 = Rotatelab_Extensions__GetTimeText_fc3638(uVar3,uVar1,0);
  puVar6 = *(undefined4 **)(_UNK_010b4d1c + 0x10b4c88);
  while( true ) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) <= iVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x14),iVar2,*puVar6);
    if (piVar5 == (int *)0x0) break;
    (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar3,*(undefined4 *)(*piVar5 + 0x2b4));
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

