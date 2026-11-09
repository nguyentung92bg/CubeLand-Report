/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass63_0$$<ProcessSatoriUserPropertiesAsync>b__1
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__1 (Rotatelab_Networking_HiroController___c__DisplayClass63_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Rotatelab.Networking.HiroController.<>c__DisplayClass63_0$$<ProcessSatoriUserPropertiesAsync>b__1
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__1
   (Rotatelab_Networking_HiroController___c__DisplayClass63_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__1_114ebf4
               (undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x24);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Hiro_SatoriSystem__UpdatePropertiesAsync_296c690
                    (iVar2,0,*(undefined4 *)(param_2 + 0x10),1,0,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask_321dc9c(&uStack_18,uVar1,1,0);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}

