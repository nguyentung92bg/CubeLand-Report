/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIConfiguration.Data$$GetLabel
System_String_o* Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data__GetLabel (Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o* __this, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIConfiguration.Data$$GetLabel
   System_String_o* Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data__GetLabel
   (Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o* __this, int64_t amount, const
   MethodInfo* method); */

int Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data__GetLabel_ff0228
              (int param_1,undefined4 param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_r5;
  int unaff_r6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  double dVar10;
  undefined8 uVar11;
  uint uStack_20;
  char *pcStack_1c;
  
  pcVar8 = (char *)(_UNK_010004e8 + 0x1000248);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010004ec + 0x100025c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010004f0 + 0x1000268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010004f4 + 0x1000274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010004f8 + 0x1000280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010004fc + 0x100028c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000500 + 0x1000298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000504 + 0x10002a4));
    *pcVar8 = '\x01';
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    switch(*(uint *)(param_1 + 0xc)) {
    case 0:
      iVar6 = System_String__op_Equality_2a0975c
                        (*(undefined4 *)(param_1 + 8),
                         **(undefined4 **)(&UNK_01000338 + _UNK_01000508),0);
      if ((iVar6 == 0) &&
         (iVar6 = System_String__op_Equality_2a0975c
                            (*(undefined4 *)(param_1 + 8),
                             **(undefined4 **)(&UNK_01000358 + _UNK_0100050c),0), iVar6 == 0)) {
        if (*(int *)(**(int **)(&UNK_01000430 + _UNK_01000518) + 0x74) == 0) {
          FUN_00ec3934();
        }
        pcVar8 = (char *)(_UNK_0108dec0 + 0x108dc08);
        uStack_20 = param_3;
        pcStack_1c = param_4;
        if (*pcVar8 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108dec4 + 0x108dc24),param_4,2,0);
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108dec8 + 0x108dc30));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108decc + 0x108dc3c));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108ded0 + 0x108dc48));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108ded4 + 0x108dc54));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108ded8 + 0x108dc60));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0108dedc + 0x108dc6c));
          *pcVar8 = '\x01';
        }
        if (-(int)(param_4 + (999 < param_3)) < 0 !=
            (SBORROW4(0,(int)param_4) != SBORROW4(-(int)param_4,(uint)(999 < param_3)))) {
          if ((uint)-(int)param_4 < (uint)(param_3 < 1000000)) {
            if (*(int *)(**(int **)(_UNK_0108dee4 + 0x108dd70) + 0x74) == 0) {
              FUN_00ec3934();
            }
            dVar10 = (double)FUN_00f88328(param_3,param_4);
            iVar6 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                              (SUB84(dVar10 / _UNK_0108de98,0),
                               (int)((ulonglong)(dVar10 / _UNK_0108de98) >> 0x20),2);
            piVar2 = *(int **)(_UNK_0108dee8 + 0x108ddb0);
          }
          else if ((uint)-(int)param_4 < (uint)(param_3 < 1000000000)) {
            if (*(int *)(**(int **)(_UNK_0108deec + 0x108ddbc) + 0x74) == 0) {
              FUN_00ec3934();
            }
            dVar10 = (double)FUN_00f88328(param_3,param_4);
            iVar6 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                              (SUB84(dVar10 / _UNK_0108dea0,0),
                               (int)((ulonglong)(dVar10 / _UNK_0108dea0) >> 0x20),2);
            piVar2 = *(int **)(_UNK_0108def0 + 0x108ddfc);
          }
          else if (param_4 < (char *)0xe8 || 0xe8U - (int)param_4 < (uint)(param_3 < 0xd4a51000)) {
            if (*(int *)(**(int **)(_UNK_0108def4 + 0x108de08) + 0x74) == 0) {
              FUN_00ec3934();
            }
            dVar10 = (double)FUN_00f88328(param_3,param_4);
            iVar6 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                              (SUB84(dVar10 / _UNK_0108dea8,0),
                               (int)((ulonglong)(dVar10 / _UNK_0108dea8) >> 0x20),2);
            piVar2 = *(int **)(_UNK_0108def8 + 0x108de48);
          }
          else {
            iVar6 = **(int **)(_UNK_0108defc + 0x108dce0);
            if (param_4 < "6__ndk115__codecvt_utf16IDsLb0EEE" ||
                "_ZTSNSt6__ndk115__codecvt_utf16IDsLb0EEE" + (7 - (int)param_4) <
                (char *)(uint)(param_3 < 0xa4c68000)) {
              if (*(int *)(iVar6 + 0x74) == 0) {
                FUN_00ec3934(iVar6,0,"_ZTSNSt6__ndk115__codecvt_utf16IDsLb0EEE" +
                                     (7 - (int)(param_4 + (param_3 >= 0xa4c68000))),
                             -0x5b398001 - param_3);
              }
              dVar10 = (double)FUN_00f88328(param_3,param_4);
              iVar6 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                                (SUB84(dVar10 / _UNK_0108deb0,0),
                                 (int)((ulonglong)(dVar10 / _UNK_0108deb0) >> 0x20),2);
              piVar2 = *(int **)(_UNK_0108df00 + 0x108de84);
            }
            else {
              if (*(int *)(iVar6 + 0x74) == 0) {
                FUN_00ec3934(iVar6,0,"_ZTSNSt6__ndk115__codecvt_utf16IDsLb0EEE" +
                                     (7 - (int)(param_4 + (param_3 >= 0xa4c68000))),
                             -0x5b398001 - param_3);
              }
              dVar10 = (double)FUN_00f88328(param_3,param_4);
              iVar6 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                                (SUB84(dVar10 / _UNK_0108deb8,0),
                                 (int)((ulonglong)(dVar10 / _UNK_0108deb8) >> 0x20),2);
              piVar2 = *(int **)(_UNK_0108df04 + 0x108dd28);
            }
          }
          iVar9 = *piVar2;
          if (iVar6 != 0) {
            unaff_r6 = *(int *)(iVar6 + 8);
            unaff_r5 = iVar6;
          }
          if (iVar6 != 0 && unaff_r6 != 0) {
            if (iVar9 != 0) {
              iVar6 = *(int *)(iVar9 + 8);
            }
            if (iVar9 != 0 && iVar6 != 0) {
              iVar6 = thunk_FUN_00efe604(iVar6 + unaff_r6,iVar9,0);
              System_String__FillStringChecked_2a0b34c(iVar6,0,unaff_r5);
              System_String__FillStringChecked_2a0b34c(iVar6,unaff_r6,iVar9);
              unaff_r5 = iVar6;
            }
          }
          else {
            if (iVar9 != 0) {
              iVar6 = *(int *)(iVar9 + 8);
            }
            unaff_r5 = iVar9;
            if (iVar9 == 0 || iVar6 == 0) {
              unaff_r5 = **(int **)(*(int *)(*(int *)(_UNK_02a0eec8 + 0x2a0ee70) + 0x48) + 0x5c);
            }
          }
          return unaff_r5;
        }
        if (*(int *)(**(int **)(_UNK_0108dee0 + 0x108dd34) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
        iVar6 = System_Int64__ToString_2b6d1c4(&uStack_20,uVar3,0);
        return iVar6;
      }
      uVar5 = *(undefined4 *)(param_1 + 8);
      uStack_20 = param_3;
      pcStack_1c = param_4;
      uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(&UNK_0100037c + _UNK_01000510) + 0x34),
                           &uStack_20);
      iVar6 = System_String__Format_2a0c264
                        (**(undefined4 **)(&UNK_010003a0 + _UNK_01000514),uVar5,uVar3,0);
      break;
    case 1:
    case 2:
      uStack_20 = param_3;
      pcStack_1c = param_4;
      uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(&UNK_01000300 + _UNK_01000538) + 0x34),
                           &uStack_20);
      iVar6 = System_String__Format_29ffb6c
                        (**(undefined4 **)(&UNK_01000320 + _UNK_0100053c),uVar3,0);
      break;
    case 3:
      if (*(int *)(**(int **)(&UNK_010003b4 + _UNK_0100051c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar11 = FUN_00f88328(param_3,param_4);
      uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
      System_TimeSpan__FromSeconds_2b8a42c(&uStack_20,uVar3,(int)uVar11,uVar3,0);
      if (*(int *)(**(int **)(&UNK_010003f4 + _UNK_01000520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar6 = Rotatelab_Extensions__GetTimeText_fc3638(uStack_20,pcStack_1c,0);
      break;
    default:
      uStack_20 = *(uint *)(param_1 + 0xc);
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01000524 + 0x100046c));
      uVar3 = FUN_00ec393c(uVar3,&uStack_20);
      uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01000528 + 0x1000484));
      uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0100052c + 0x1000494));
      uVar3 = System_String__Format_2a0c264(uVar5,uVar1,uVar3,0);
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01000530 + 0x10004b8));
      uVar5 = thunk_FUN_00f00cdc();
      System_ArgumentException___ctor_2b113a4(uVar5,uVar3,0);
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01000534 + 0x10004d8));
      func_0x00ec3920(uVar5,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    return iVar6;
  }
  pcVar8 = (char *)(_UNK_0100077c + 0x1000554);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000780 + 0x1000568));
    *pcVar8 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 8);
  piVar2 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01000784 + 0x100058c));
  System_Text_StringBuilder___ctor_2a14a7c(piVar2,iVar6 + 4,0);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),0,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Text_StringBuilder__Append_2a1726c(piVar2,uVar3,0);
  iVar9 = *(int *)(_UNK_01000788 + 0x10005f4);
  iVar6 = 0;
  do {
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = iVar6 + 1;
    if (*(int *)(*(int *)(param_1 + 8) + 8) <= iVar7) {
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Could not recover jumptable at 0x01000778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
      return iVar6;
    }
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),iVar7,0);
    if (*(int *)(*(int *)(iVar9 + 0x44) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = System_Char__IsUpper_2b17edc(uVar3,0);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),iVar6,0);
      if (*(int *)(*(int *)(iVar9 + 0x44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar4 = System_Char__IsLower_2b17f78(uVar5,0);
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar6 + 2 < *(int *)(*(int *)(param_1 + 8) + 8)) {
          if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar5 = System_String__get_Chars_2a04790(*(int *)(param_1 + 8),iVar6 + 2,0);
          if (*(int *)(*(int *)(iVar9 + 0x44) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar6 = System_Char__IsLower_2b17f78(uVar5,0);
          if (iVar6 != 0) goto LAB_010006a8;
        }
      }
      else {
LAB_010006a8:
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Text_StringBuilder__Append_2a1726c(piVar2,0x20,0);
      }
    }
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Text_StringBuilder__Append_2a1726c(piVar2,uVar3,0);
    iVar6 = iVar7;
  } while( true );
}

