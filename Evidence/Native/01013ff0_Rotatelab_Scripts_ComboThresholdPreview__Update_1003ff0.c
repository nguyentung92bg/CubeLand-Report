/* IL2CPP: Rotatelab.Scripts.ComboThresholdPreview$$Update
void Rotatelab_Scripts_ComboThresholdPreview__Update (Rotatelab_Scripts_ComboThresholdPreview_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboThresholdPreview$$Update
   void Rotatelab_Scripts_ComboThresholdPreview__Update (Rotatelab_Scripts_ComboThresholdPreview_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ComboThresholdPreview__Update_1003ff0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01014414 + 0x1014008);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014418 + 0x101401c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101441c + 0x1014028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014420 + 0x1014034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014424 + 0x1014040));
    *pcVar6 = '\x01';
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01014428 + 0x1014054) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar7,0,0);
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0101442c + 0x101408c));
    piVar8 = *(int **)(param_1 + 0x10);
    piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01014430 + 0x10140a8),7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_1c = *(undefined4 *)(iVar1 + 0x1c);
    iVar5 = *(int *)(_UNK_01014434 + 0x10140cc);
    iVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x3c),&uStack_1c);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar3 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[4] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 4,iVar3);
    uStack_20 = *(undefined4 *)(iVar1 + 0x24);
    iVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x3c),&uStack_20);
    if ((iVar3 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[5] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 5,iVar3);
    uStack_24 = *(undefined4 *)(iVar1 + 0x20);
    iVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x3c),&uStack_24);
    if ((iVar3 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[6] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 6,iVar3);
    uStack_28 = Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c(iVar1,0,0);
    iVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x3c),&uStack_28);
    if ((iVar3 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar2[3] < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[7] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 7,iVar3);
    uStack_2c = Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c(iVar1,1,0);
    iVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x3c),&uStack_2c);
    if ((iVar3 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar2[3] < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[8] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 8,iVar3);
    uStack_30 = Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c(iVar1,2,0);
    iVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x3c),&uStack_30);
    if ((iVar3 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar2[3] < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[9] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 9,iVar3);
    uStack_34 = Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c(iVar1,3,0);
    iVar1 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x3c),&uStack_34);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar2[3] < 7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[10] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 10,iVar1);
    uVar7 = System_String__Format_2a0c308(**(undefined4 **)(_UNK_01014438 + 0x10143e0),piVar2,0);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0x2b4));
  }
  return;
}

