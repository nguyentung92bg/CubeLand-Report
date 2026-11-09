/* IL2CPP: Rotatelab.Boosters.CannonProjectileController.<>c$$<Fire>b__9_1
void Rotatelab_Boosters_CannonProjectileController___c___Fire_b__9_1 (Rotatelab_Boosters_CannonProjectileController___c_o* __this, Rotatelab_Boosters_CannonProjectileController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Boosters.CannonProjectileController.<>c$$<Fire>b__9_1
   void Rotatelab_Boosters_CannonProjectileController___c___Fire_b__9_1
   (Rotatelab_Boosters_CannonProjectileController___c_o* __this,
   Rotatelab_Boosters_CannonProjectileController_o* this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonProjectileController___c___Fire_b__9_1_1133ed4
               (undefined4 param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_2 + 0x18),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar1,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
             *(undefined4 *)(param_2 + 0x34),0);
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e960(*(int *)(param_2 + 0x18),0);
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  thunk_FUN_00ec5080((int *)(param_2 + 0x38),0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

