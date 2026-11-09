/* IL2CPP: Rotatelab.Scripts.BlasterController$$HasShootableTarget
bool Rotatelab_Scripts_BlasterController__HasShootableTarget (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterController$$HasShootableTarget
   bool Rotatelab_Scripts_BlasterController__HasShootableTarget
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_BlasterController__HasShootableTarget_1036550(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = 0;
  uStack_14 = 0;
  if ((0 < param_1[0x45]) &&
     (iVar1 = (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c)), iVar1 != 0
     )) {
    uVar2 = Rotatelab_Scripts_BlasterController__TryFindTarget_10365a8(param_1,&uStack_14);
  }
  return uVar2;
}

