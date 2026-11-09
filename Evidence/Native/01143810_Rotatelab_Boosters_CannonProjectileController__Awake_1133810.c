/* IL2CPP: Rotatelab.Boosters.CannonProjectileController$$Awake
void Rotatelab_Boosters_CannonProjectileController__Awake (Rotatelab_Boosters_CannonProjectileController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03625a10) */
/* IL2CPP: Rotatelab.Boosters.CannonProjectileController$$Awake
   void Rotatelab_Boosters_CannonProjectileController__Awake
   (Rotatelab_Boosters_CannonProjectileController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_CannonProjectileController__Awake_1133810(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
  if (iVar1 != 0) {
    pcVar2 = (char *)(iRam03625a5c + 0x36259b0);
    if (*pcVar2 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a60 + 0x36259c4),0,0,0,unaff_r4);
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam03625a64 + 0x36259d0));
      *pcVar2 = '\x01';
    }
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
      if (*(int *)(**(int **)(iRam03625a68 + 0x36259fc) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(iRam03625a6c + 0x3625a24);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03625a70 + 0x3625a34);
        *(code **)(iRam03625a74 + 0x3625a44) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x03625a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar1,0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

