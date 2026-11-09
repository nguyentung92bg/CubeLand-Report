/* IL2CPP: Rotatelab.ObservableEnergy$$UpdateTimers
void Rotatelab_ObservableEnergy__UpdateTimers (Rotatelab_ObservableEnergy_o* __this, int64_t currentTimeInSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableEnergy$$UpdateTimers
   void Rotatelab_ObservableEnergy__UpdateTimers (Rotatelab_ObservableEnergy_o* __this, int64_t
   currentTimeInSeconds, const MethodInfo* method); */

void Rotatelab_ObservableEnergy__UpdateTimers_fb32f0
               (int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_00fc36a0 + 0xfc3310);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc36a4 + 0xfc3324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc36a8 + 0xfc3330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc36ac + 0xfc333c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar10 = (uint *)(param_1 + 10);
  puVar9 = (uint *)(param_1 + 0x10);
  uStack_38 = 0;
  lVar16 = Rotatelab_ObservableLong__get_Value_fb2b94(param_1);
  uVar6 = (uint)((ulonglong)lVar16 >> 0x20);
  uVar11 = (uint)lVar16;
  uVar17 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  bVar14 = uVar11 < (uint)uVar17;
  if (((int)(uVar6 - (iVar4 + (uint)bVar14)) < 0 !=
       (SBORROW4(uVar6,iVar4) != SBORROW4(uVar6 - iVar4,(uint)bVar14))) &&
     (iVar4 = param_1[0x11],
     (int)-(iVar4 + (uint)(*puVar9 != 0)) < 0 ==
     (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(*puVar9 != 0))))) {
    if (*(int *)(**(int **)(_UNK_00fc36b0 + 0xfc33a4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_48,0);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    lVar18 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_38,0);
    *(longlong *)puVar9 = lVar18 + *(longlong *)puVar10;
  }
  piVar12 = param_1 + 0xe;
  uVar17 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  bVar14 = uVar11 < (uint)uVar17;
  if (((((int)(uVar6 - (iVar4 + (uint)bVar14)) < 0 !=
         (SBORROW4(uVar6,iVar4) != SBORROW4(uVar6 - iVar4,(uint)bVar14))) &&
       (plVar13 = (longlong *)(param_1 + 0xc), (int)(uint)((int)*plVar13 == 0) <= param_1[0xd])) &&
      ((int)(uint)(*puVar10 == 0) <= param_1[0xb])) &&
     (iVar4 = param_1[0x11], lVar18 = lVar16,
     (int)(param_4 - (iVar4 + (uint)(param_3 < *puVar9))) < 0 ==
     (SBORROW4(param_4,iVar4) != SBORROW4(param_4 - iVar4,(uint)(param_3 < *puVar9))))) {
    do {
      lVar1 = *plVar13;
      iVar7 = (int)((ulonglong)(lVar18 + lVar1) >> 0x20);
      lVar19 = lVar18 + *plVar13;
      uVar17 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
      iVar4 = (int)((ulonglong)uVar17 >> 0x20);
      bVar14 = (uint)(lVar18 + lVar1) < (uint)uVar17;
      if ((int)(iVar7 - (iVar4 + (uint)bVar14)) < 0 ==
          (SBORROW4(iVar7,iVar4) != SBORROW4(iVar7 - iVar4,(uint)bVar14))) {
        lVar19 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
        break;
      }
      uVar3 = *puVar10 + *puVar9;
      iVar4 = param_1[0xb] + param_1[0x11] + (uint)CARRY4(*puVar10,*puVar9);
      *puVar9 = uVar3;
      param_1[0x11] = iVar4;
      lVar18 = lVar19;
    } while ((int)(param_4 - (iVar4 + (uint)(param_3 < uVar3))) < 0 ==
             (SBORROW4(param_4,iVar4) != SBORROW4(param_4 - iVar4,(uint)(param_3 < uVar3))));
    uVar3 = (uint)((ulonglong)lVar19 >> 0x20);
    uVar6 = uVar3 ^ uVar6;
    if ((uint)lVar19 != uVar11 || uVar6 != 0) {
      (**(code **)(*param_1 + 0xf8))
                (param_1,uVar6,(uint)lVar19,uVar3,*(undefined4 *)(*param_1 + 0xfc));
      iVar4 = param_1[0x12];
      lVar16 = lVar19;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))
                  (*(undefined4 *)(iVar4 + 0x20),*(code **)(iVar4 + 0xc),*piVar12,param_1[0xf],
                   *(undefined4 *)(iVar4 + 0x14));
      }
    }
  }
  iVar7 = (int)((ulonglong)lVar16 >> 0x20);
  uVar17 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  bVar14 = (uint)lVar16 < (uint)uVar17;
  if (((int)(iVar7 - (iVar4 + (uint)bVar14)) < 0 ==
       (SBORROW4(iVar7,iVar4) != SBORROW4(iVar7 - iVar4,(uint)bVar14))) ||
     (param_1[0xb] < (int)(uint)(*puVar10 == 0))) {
    iVar4 = 0;
    iVar7 = 0;
    *puVar9 = 0;
    param_1[0x11] = 0;
  }
  else {
    iVar4 = *puVar9 - param_3;
    iVar7 = param_1[0x11] - (param_4 + (uint)(*puVar9 < param_3));
  }
  plVar13 = (longlong *)(param_1 + 0x14);
  if (iVar4 != *piVar12 || iVar7 != param_1[0xf]) {
    iVar2 = param_1[0x12];
    *piVar12 = iVar4;
    param_1[0xf] = iVar7;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20));
    }
  }
  uVar11 = param_1[0x16];
  iVar4 = param_1[0x17];
  lVar16 = *plVar13;
  iVar7 = param_1[0x15];
  if (*(int *)(**(int **)(_UNK_00fc36b4 + 0xfc34f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  lVar18 = System_Math__Max_2b6fe2c
                     (0,0,uVar11 - param_3,iVar4 - (param_4 + (uint)(uVar11 < param_3)),0);
  uVar5 = (undefined4)((ulonglong)lVar18 >> 0x20);
  if (lVar18 != *plVar13) {
    iVar4 = param_1[0x18];
    *plVar13 = lVar18;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))
                (*(undefined4 *)(iVar4 + 0x20),uVar5,(int)lVar18,uVar5,*(undefined4 *)(iVar4 + 0x14)
                );
      lVar18 = *plVar13;
    }
  }
  iVar4 = (int)((ulonglong)lVar18 >> 0x20);
  bVar14 = (int)lVar18 != 0;
  bVar15 = (int)lVar16 != 0;
  if (((int)-(iVar7 + (uint)bVar15) < 0 != (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)bVar15))) !=
      ((int)-(iVar4 + (uint)bVar14) < 0 != (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)bVar14)))) {
    Rotatelab_ObservableValue_long___ForceInvokeOnValueChanged_185d848
              (param_1,**(undefined4 **)(_UNK_00fc36b8 + 0xfc35ac));
  }
  return;
}

