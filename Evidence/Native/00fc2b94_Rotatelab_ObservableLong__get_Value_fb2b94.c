/* IL2CPP: Rotatelab.ObservableLong$$get_Value
int64_t Rotatelab_ObservableLong__get_Value (Rotatelab_ObservableLong_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableLong$$get_Value
   int64_t Rotatelab_ObservableLong__get_Value (Rotatelab_ObservableLong_o* __this, const
   MethodInfo* method); */

undefined8 Rotatelab_ObservableLong__get_Value_fb2b94(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  
  pcVar5 = (char *)(_UNK_00fc2cf4 + 0xfc2bac);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2cf8 + 0xfc2bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2cfc + 0xfc2bcc));
    *pcVar5 = '\x01';
  }
  uVar8 = param_1[2];
  iVar9 = param_1[3];
  uVar11 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  iVar4 = (int)((ulonglong)uVar11 >> 0x20);
  uVar3 = (uint)uVar11;
  uVar11 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  iVar7 = (int)((ulonglong)uVar11 >> 0x20);
  uVar6 = (uint)uVar11;
  piVar10 = *(int **)(_UNK_00fc2d00 + 0xfc2c1c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_00fc2d04 + 0xfc2c38);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2d08 + 0xfc2c4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2d0c + 0xfc2c58));
    *pcVar5 = '\x01';
  }
  if ((int)(iVar7 - (iVar4 + (uint)(uVar6 < uVar3))) < 0 !=
      (SBORROW4(iVar7,iVar4) != SBORROW4(iVar7 - iVar4,(uint)(uVar6 < uVar3)))) {
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_Math__ThrowMinMaxException_long__14c1348
              (uVar3,iVar4,uVar6,iVar7,**(undefined4 **)(_UNK_00fc2d10 + 0xfc2c98));
  }
  bVar1 = (int)(iVar9 - (iVar7 + (uint)(uVar8 < uVar6))) < 0 !=
          (SBORROW4(iVar9,iVar7) != SBORROW4(iVar9 - iVar7,(uint)(uVar8 < uVar6)));
  if (bVar1) {
    uVar6 = uVar8;
  }
  bVar2 = (int)(iVar9 - (iVar4 + (uint)(uVar8 < uVar3))) < 0 !=
          (SBORROW4(iVar9,iVar4) != SBORROW4(iVar9 - iVar4,(uint)(uVar8 < uVar3)));
  if (bVar2) {
    uVar6 = uVar3;
  }
  if (bVar1) {
    iVar7 = iVar9;
  }
  if (bVar2) {
    iVar7 = iVar4;
  }
  return CONCAT44(iVar7,uVar6);
}

