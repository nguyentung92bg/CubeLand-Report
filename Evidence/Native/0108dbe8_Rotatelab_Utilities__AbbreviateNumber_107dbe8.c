/* IL2CPP: Rotatelab.Utilities$$AbbreviateNumber
System_String_o* Rotatelab_Utilities__AbbreviateNumber (int64_t number, int32_t decimals, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$AbbreviateNumber
   System_String_o* Rotatelab_Utilities__AbbreviateNumber (int64_t number, int32_t decimals, const
   MethodInfo* method); */

int Rotatelab_Utilities__AbbreviateNumber_107dbe8(uint param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar5;
  double dVar6;
  uint uStack_20;
  char *pcStack_1c;
  
  pcVar5 = (char *)(_UNK_0108dec0 + 0x108dc08);
  uStack_20 = param_1;
  pcStack_1c = param_2;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108dec4 + 0x108dc24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108dec8 + 0x108dc30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108decc + 0x108dc3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ded0 + 0x108dc48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ded4 + 0x108dc54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ded8 + 0x108dc60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108dedc + 0x108dc6c));
    *pcVar5 = '\x01';
  }
  if (-(int)(param_2 + (999 < param_1)) < 0 !=
      (SBORROW4(0,(int)param_2) != SBORROW4(-(int)param_2,(uint)(999 < param_1)))) {
    if ((uint)-(int)param_2 < (uint)(param_1 < 1000000)) {
      if (*(int *)(**(int **)(_UNK_0108dee4 + 0x108dd70) + 0x74) == 0) {
        FUN_00ec3934();
      }
      dVar6 = (double)FUN_00f88328(param_1,param_2);
      iVar1 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                        (SUB84(dVar6 / _UNK_0108de98,0),
                         (int)((ulonglong)(dVar6 / _UNK_0108de98) >> 0x20),param_3);
      piVar3 = *(int **)(_UNK_0108dee8 + 0x108ddb0);
    }
    else if ((uint)-(int)param_2 < (uint)(param_1 < 1000000000)) {
      if (*(int *)(**(int **)(_UNK_0108deec + 0x108ddbc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      dVar6 = (double)FUN_00f88328(param_1,param_2);
      iVar1 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                        (SUB84(dVar6 / _UNK_0108dea0,0),
                         (int)((ulonglong)(dVar6 / _UNK_0108dea0) >> 0x20),param_3);
      piVar3 = *(int **)(_UNK_0108def0 + 0x108ddfc);
    }
    else if (param_2 < (char *)0xe8 || 0xe8U - (int)param_2 < (uint)(param_1 < 0xd4a51000)) {
      if (*(int *)(**(int **)(_UNK_0108def4 + 0x108de08) + 0x74) == 0) {
        FUN_00ec3934();
      }
      dVar6 = (double)FUN_00f88328(param_1,param_2);
      iVar1 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                        (SUB84(dVar6 / _UNK_0108dea8,0),
                         (int)((ulonglong)(dVar6 / _UNK_0108dea8) >> 0x20),param_3);
      piVar3 = *(int **)(_UNK_0108def8 + 0x108de48);
    }
    else {
      iVar1 = **(int **)(_UNK_0108defc + 0x108dce0);
      if (param_2 < "6__ndk115__codecvt_utf16IDsLb0EEE" ||
          "_ZTSNSt6__ndk115__codecvt_utf16IDsLb0EEE" + (7 - (int)param_2) <
          (char *)(uint)(param_1 < 0xa4c68000)) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934(iVar1,0,"_ZTSNSt6__ndk115__codecvt_utf16IDsLb0EEE" +
                               (7 - (int)(param_2 + (param_1 >= 0xa4c68000))),-0x5b398001 - param_1)
          ;
        }
        dVar6 = (double)FUN_00f88328(param_1,param_2);
        iVar1 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                          (SUB84(dVar6 / _UNK_0108deb0,0),
                           (int)((ulonglong)(dVar6 / _UNK_0108deb0) >> 0x20),param_3);
        piVar3 = *(int **)(_UNK_0108df00 + 0x108de84);
      }
      else {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934(iVar1,0,"_ZTSNSt6__ndk115__codecvt_utf16IDsLb0EEE" +
                               (7 - (int)(param_2 + (param_1 >= 0xa4c68000))),-0x5b398001 - param_1)
          ;
        }
        dVar6 = (double)FUN_00f88328(param_1,param_2);
        iVar1 = Rotatelab_Utilities__FormatNumberWithDecimals_107db00
                          (SUB84(dVar6 / _UNK_0108deb8,0),
                           (int)((ulonglong)(dVar6 / _UNK_0108deb8) >> 0x20),param_3);
        piVar3 = *(int **)(_UNK_0108df04 + 0x108dd28);
      }
    }
    iVar4 = *piVar3;
    if (iVar1 != 0) {
      unaff_r6 = *(int *)(iVar1 + 8);
      unaff_r5 = iVar1;
    }
    if (iVar1 != 0 && unaff_r6 != 0) {
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 8);
      }
      if (iVar4 != 0 && iVar1 != 0) {
        iVar1 = thunk_FUN_00efe604(iVar1 + unaff_r6,iVar4,0);
        System_String__FillStringChecked_2a0b34c(iVar1,0,unaff_r5);
        System_String__FillStringChecked_2a0b34c(iVar1,unaff_r6,iVar4);
        unaff_r5 = iVar1;
      }
    }
    else {
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 8);
      }
      unaff_r5 = iVar4;
      if (iVar4 == 0 || iVar1 == 0) {
        unaff_r5 = **(int **)(*(int *)(*(int *)(_UNK_02a0eec8 + 0x2a0ee70) + 0x48) + 0x5c);
      }
    }
    return unaff_r5;
  }
  if (*(int *)(**(int **)(_UNK_0108dee0 + 0x108dd34) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  iVar1 = System_Int64__ToString_2b6d1c4(&uStack_20,uVar2,0);
  return iVar1;
}

