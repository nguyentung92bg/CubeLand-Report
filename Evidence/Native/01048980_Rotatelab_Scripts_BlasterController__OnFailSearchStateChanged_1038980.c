/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnFailSearchStateChanged
void Rotatelab_Scripts_BlasterController__OnFailSearchStateChanged (Rotatelab_Scripts_BlasterController_o* __this, bool isEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnFailSearchStateChanged
   void Rotatelab_Scripts_BlasterController__OnFailSearchStateChanged
   (Rotatelab_Scripts_BlasterController_o* __this, bool isEnabled, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__OnFailSearchStateChanged_1038980(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 6;
    if (param_1[0x2b] != 8) {
      return;
    }
  }
  else {
    if (param_1[0x2b] != 6) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,*(undefined4 *)(*param_1 + 0xec));
    uVar2 = 8;
    if (iVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x010489d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,uVar2,*(undefined4 *)(*param_1 + 0x154));
  return;
}

