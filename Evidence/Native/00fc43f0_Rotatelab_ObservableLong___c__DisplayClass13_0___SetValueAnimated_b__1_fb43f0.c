/* IL2CPP: Rotatelab.ObservableLong.<>c__DisplayClass13_0$$<SetValueAnimated>b__1
void Rotatelab_ObservableLong___c__DisplayClass13_0___SetValueAnimated_b__1 (Rotatelab_ObservableLong___c__DisplayClass13_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableLong.<>c__DisplayClass13_0$$<SetValueAnimated>b__1
   void Rotatelab_ObservableLong___c__DisplayClass13_0___SetValueAnimated_b__1
   (Rotatelab_ObservableLong___c__DisplayClass13_0_o* __this, float t, const MethodInfo* method); */

void Rotatelab_ObservableLong___c__DisplayClass13_0___SetValueAnimated_b__1_fb43f0
               (int param_1,float param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  
  pcVar1 = (char *)(_UNK_00fc4510 + 0xfc4414);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4514 + 0xfc4428));
    *pcVar1 = '\x01';
  }
  uVar5 = *(uint *)(param_1 + 8);
  piVar3 = *(int **)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    uVar9 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
    uVar6 = *(uint *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      dVar7 = (double)FUN_00f88328((uint)uVar9 - uVar6,
                                   (int)((ulonglong)uVar9 >> 0x20) -
                                   (*(int *)(param_1 + 0xc) + (uint)((uint)uVar9 < uVar6)));
      dVar8 = (double)FUN_00f88328(uVar5,uVar4);
      dVar7 = dVar8 + (double)param_2 * dVar7 + _UNK_00fc4500;
      uVar9 = FUN_00f88224(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
      if (dVar7 == _UNK_00fc4508) {
        uVar9 = 0x8000000000000000;
      }
      uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
      Rotatelab_ObservableValue_long___ForceInvokeOnValueChanged_185d890
                (iVar2,uVar4,(int)uVar9,uVar4,**(undefined4 **)(_UNK_00fc4518 + 0xfc44d0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

