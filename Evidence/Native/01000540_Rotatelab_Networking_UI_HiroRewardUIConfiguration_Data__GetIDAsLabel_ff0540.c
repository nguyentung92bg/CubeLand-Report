/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIConfiguration.Data$$GetIDAsLabel
System_String_o* Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data__GetIDAsLabel (Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIConfiguration.Data$$GetIDAsLabel
   System_String_o* Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data__GetIDAsLabel
   (Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data__GetIDAsLabel_ff0540(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_0100077c + 0x1000554);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000780 + 0x1000568));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 8);
  piVar1 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01000784 + 0x100058c));
  System_Text_StringBuilder___ctor_2a14a7c(piVar1,iVar6 + 4,0);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),0,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Text_StringBuilder__Append_2a1726c(piVar1,uVar2,0);
  iVar8 = *(int *)(_UNK_01000788 + 0x10005f4);
  iVar6 = 0;
  do {
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = iVar6 + 1;
    if (*(int *)(*(int *)(param_1 + 8) + 8) <= iVar7) {
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Could not recover jumptable at 0x01000778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      return;
    }
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),iVar7,0);
    if (*(int *)(*(int *)(iVar8 + 0x44) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = System_Char__IsUpper_2b17edc(uVar2,0);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),iVar6,0);
      if (*(int *)(*(int *)(iVar8 + 0x44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = System_Char__IsLower_2b17f78(uVar4,0);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar6 + 2 < *(int *)(*(int *)(param_1 + 8) + 8)) {
          if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar4 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),iVar6 + 2,0);
          if (*(int *)(*(int *)(iVar8 + 0x44) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar6 = System_Char__IsLower_2b17f78(uVar4,0);
          if (iVar6 != 0) goto LAB_010006a8;
        }
      }
      else {
LAB_010006a8:
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Text_StringBuilder__Append_2a1726c(piVar1,0x20,0);
      }
    }
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Text_StringBuilder__Append_2a1726c(piVar1,uVar2,0);
    iVar6 = iVar7;
  } while( true );
}

