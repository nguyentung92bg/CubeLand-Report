/* IL2CPP: Rotatelab.ObservableEnergy$$get_Value
int64_t Rotatelab_ObservableEnergy__get_Value (Rotatelab_ObservableEnergy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableEnergy$$get_Value
   int64_t Rotatelab_ObservableEnergy__get_Value (Rotatelab_ObservableEnergy_o* __this, const
   MethodInfo* method); */

undefined8 Rotatelab_ObservableEnergy__get_Value_fb31c0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  
  iVar5 = param_1[0x15];
  if ((int)-(iVar5 + (uint)(param_1[0x14] != 0)) < 0 ==
      (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(param_1[0x14] != 0)))) {
    pcVar6 = (char *)(_UNK_00fc2cf4 + 0xfc2bac);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2cf8 + 0xfc2bc0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2cfc + 0xfc2bcc));
      *pcVar6 = '\x01';
    }
    uVar8 = param_1[2];
    iVar9 = param_1[3];
    uVar11 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
    iVar4 = (int)((ulonglong)uVar11 >> 0x20);
    uVar3 = (uint)uVar11;
    uVar11 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
    iVar5 = (int)((ulonglong)uVar11 >> 0x20);
    uVar7 = (uint)uVar11;
    piVar10 = *(int **)(_UNK_00fc2d00 + 0xfc2c1c);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_00fc2d04 + 0xfc2c38);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2d08 + 0xfc2c4c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2d0c + 0xfc2c58));
      *pcVar6 = '\x01';
    }
    if ((int)(iVar5 - (iVar4 + (uint)(uVar7 < uVar3))) < 0 !=
        (SBORROW4(iVar5,iVar4) != SBORROW4(iVar5 - iVar4,(uint)(uVar7 < uVar3)))) {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_Math__ThrowMinMaxException_long__14c1348
                (uVar3,iVar4,uVar7,iVar5,**(undefined4 **)(_UNK_00fc2d10 + 0xfc2c98));
    }
    bVar1 = (int)(iVar9 - (iVar5 + (uint)(uVar8 < uVar7))) < 0 !=
            (SBORROW4(iVar9,iVar5) != SBORROW4(iVar9 - iVar5,(uint)(uVar8 < uVar7)));
    if (bVar1) {
      uVar7 = uVar8;
    }
    bVar2 = (int)(iVar9 - (iVar4 + (uint)(uVar8 < uVar3))) < 0 !=
            (SBORROW4(iVar9,iVar4) != SBORROW4(iVar9 - iVar4,(uint)(uVar8 < uVar3)));
    if (bVar2) {
      uVar7 = uVar3;
    }
    if (bVar1) {
      iVar5 = iVar9;
    }
    if (bVar2) {
      iVar5 = iVar4;
    }
    return CONCAT44(iVar5,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00fc31dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar11 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  return uVar11;
}

