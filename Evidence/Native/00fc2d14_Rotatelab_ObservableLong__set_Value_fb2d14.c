/* IL2CPP: Rotatelab.ObservableLong$$set_Value
void Rotatelab_ObservableLong__set_Value (Rotatelab_ObservableLong_o* __this, int64_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableLong$$set_Value
   void Rotatelab_ObservableLong__set_Value (Rotatelab_ObservableLong_o* __this, int64_t value,
   const MethodInfo* method); */

void Rotatelab_ObservableLong__set_Value_fb2d14
               (int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  pcVar5 = (char *)(_UNK_00fc2e98 + 0xfc2d34);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2e9c + 0xfc2d48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2ea0 + 0xfc2d54));
    *pcVar5 = '\x01';
  }
  uVar8 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  uVar3 = (uint)uVar8;
  uVar8 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  iVar7 = (int)((ulonglong)uVar8 >> 0x20);
  uVar6 = (uint)uVar8;
  if (*(int *)(**(int **)(_UNK_00fc2ea4 + 0xfc2da0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_00fc2ea8 + 0xfc2dbc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2eac + 0xfc2dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc2eb0 + 0xfc2ddc));
    *pcVar5 = '\x01';
  }
  if ((int)(iVar7 - (iVar4 + (uint)(uVar6 < uVar3))) < 0 !=
      (SBORROW4(iVar7,iVar4) != SBORROW4(iVar7 - iVar4,(uint)(uVar6 < uVar3)))) {
    if (*(int *)(**(int **)(_UNK_00fc2eb4 + 0xfc2dfc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_Math__ThrowMinMaxException_long__14c1348
              (uVar3,iVar4,uVar6,iVar7,**(undefined4 **)(_UNK_00fc2eb8 + 0xfc2e24));
  }
  bVar1 = (int)(param_4 - (iVar7 + (uint)(param_3 < uVar6))) < 0 !=
          (SBORROW4(param_4,iVar7) != SBORROW4(param_4 - iVar7,(uint)(param_3 < uVar6)));
  if (bVar1) {
    uVar6 = param_3;
  }
  bVar2 = (int)(param_4 - (iVar4 + (uint)(param_3 < uVar3))) < 0 !=
          (SBORROW4(param_4,iVar4) != SBORROW4(param_4 - iVar4,(uint)(param_3 < uVar3)));
  if (bVar2) {
    uVar6 = uVar3;
  }
  if (bVar1) {
    iVar7 = param_4;
  }
  if (bVar2) {
    iVar7 = iVar4;
  }
  Rotatelab_ObservableValue_long___set_Value_185d368
            (param_1,bVar1,uVar6,iVar7,**(undefined4 **)(_UNK_00fc2ebc + 0xfc2e48));
  return;
}

