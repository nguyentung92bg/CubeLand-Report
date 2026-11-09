/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$Equals
bool Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Equals (Rotatelab_ObservableValue_T__o* __this, Il2CppObject* obj, const MethodInfo_185E694* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$Equals
   bool Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Equals
   (Rotatelab_ObservableValue_T__o* __this, Il2CppObject* obj, const MethodInfo_185E694* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___Equals_185e694
               (int *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  int aiStack_40 [2];
  int *piStack_38;
  int iStack_34;
  char cStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0186e834 + 0x186e6b8);
  piVar2 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  uVar4 = *(int *)(piVar2[1] + 0x84) + 7U & 0xfffffff8;
  piVar8 = (int *)((int)&piStack_38 - uVar4);
  piVar7 = (int *)((int)piVar8 - uVar4);
  iVar5 = *piVar2;
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768(iVar5);
  }
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    if (((uint)*(byte *)(iVar5 + 0xb8) <= (uint)*(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar5 + 0xb8) * 4 + -4) == iVar5)) {
      piVar2 = (int *)(*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 8))();
      iVar5 = *(int *)(*param_1 + 0xf4);
      uVar3 = *(undefined4 *)(iVar5 + 4);
      pcVar6 = *(code **)(iVar5 + 8);
      piStack_38 = piVar8;
      piVar7[-2] = (int)piVar8;
      (*pcVar6)(uVar3,iVar5,param_1,&piStack_38);
      iVar5 = *(int *)(*param_2 + 0xf4);
      uVar3 = *(undefined4 *)(iVar5 + 4);
      pcVar6 = *(code **)(iVar5 + 8);
      piStack_38 = piVar7;
      piVar7[-2] = (int)piVar7;
      (*pcVar6)(uVar3,iVar5,param_2,&piStack_38);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iStack_34 = (int)piVar7;
      if (-1 < *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4) + 0x14)) {
        iStack_34 = *piVar7;
        piVar8 = (int *)*piVar8;
      }
      iVar5 = *(int *)(*piVar2 + 0x104);
      uVar3 = *(undefined4 *)(iVar5 + 4);
      pcVar6 = *(code **)(iVar5 + 8);
      piStack_38 = piVar8;
      piVar7[-2] = (int)&cStack_2d;
      (*pcVar6)(uVar3,iVar5,piVar2,&piStack_38);
      uVar1 = 0;
      if (cStack_2d != '\0') {
        uVar1 = 1;
      }
    }
  }
  if (**(int **)(_UNK_0186e838 + 0x186e820) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

