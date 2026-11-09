/* IL2CPP: Rotatelab.ObservableEnergy$$get_SecondsToFull
int64_t Rotatelab_ObservableEnergy__get_SecondsToFull (Rotatelab_ObservableEnergy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableEnergy$$get_SecondsToFull
   int64_t Rotatelab_ObservableEnergy__get_SecondsToFull (Rotatelab_ObservableEnergy_o* __this,
   const MethodInfo* method); */

undefined8 Rotatelab_ObservableEnergy__get_SecondsToFull_fb3834(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  uVar7 = Rotatelab_ObservableLong__get_Value_fb2b94(param_1);
  uVar3 = (uint)uVar6 - (uint)uVar7;
  iVar4 = (int)((ulonglong)uVar6 >> 0x20) -
          ((int)((ulonglong)uVar7 >> 0x20) + (uint)((uint)uVar6 < (uint)uVar7));
  if (iVar4 < (int)(uint)(uVar3 == 0)) {
    return 0;
  }
  iVar2 = param_1[0x15];
  if ((int)-(iVar2 + (uint)(param_1[0x14] != 0)) < 0 !=
      (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(param_1[0x14] != 0)))) {
    return 0;
  }
  uVar5 = param_1[0xc];
  iVar2 = param_1[0xd];
  if ((int)(uint)(uVar5 == 0) <= iVar2) {
    uVar6 = FUN_00f88ac4(uVar3 + uVar5 + -1,
                         (iVar4 + iVar2 + (uint)CARRY4(uVar3,uVar5)) - (uint)(uVar3 + uVar5 == 0),
                         uVar5,iVar2);
    uVar3 = (int)uVar6 - 1;
    lVar1 = (ulonglong)uVar3 * (ulonglong)(uint)param_1[10];
    uVar5 = (uint)lVar1;
    return CONCAT44(param_1[0xb] * uVar3 +
                    param_1[10] * ((int)((ulonglong)uVar6 >> 0x20) - (uint)((int)uVar6 == 0)) +
                    (int)((ulonglong)lVar1 >> 0x20) + param_1[0xf] +
                    (uint)CARRY4(uVar5,param_1[0xe]),uVar5 + param_1[0xe]);
  }
  return 0;
}

