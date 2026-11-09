/* IL2CPP: Rotatelab.Boosters.CannonRig$$SetAmmoCount
void Rotatelab_Boosters_CannonRig__SetAmmoCount (Rotatelab_Boosters_CannonRig_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Boosters.CannonRig$$SetAmmoCount
   void Rotatelab_Boosters_CannonRig__SetAmmoCount (Rotatelab_Boosters_CannonRig_o* __this, int32_t
   count, const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__SetAmmoCount_1134b40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uStack_14;
  
  piVar2 = *(int **)(param_1 + 0x28);
  uStack_14 = param_2;
  uVar1 = System_Int32__ToString_2b6b9ec(&uStack_14,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0x2b0))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 0x2b4));
  return;
}

