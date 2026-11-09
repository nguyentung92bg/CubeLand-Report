/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController.<>c$$<Destroy>b__32_0
void Rotatelab_Scripts_FlyingPiggyController___c___Destroy_b__32_0 (Rotatelab_Scripts_FlyingPiggyController___c_o* __this, Rotatelab_Scripts_FlyingPiggyController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController.<>c$$<Destroy>b__32_0
   void Rotatelab_Scripts_FlyingPiggyController___c___Destroy_b__32_0
   (Rotatelab_Scripts_FlyingPiggyController___c_o* __this,
   Rotatelab_Scripts_FlyingPiggyController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController___c___Destroy_b__32_0_100e930
               (undefined4 param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  int iVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_2 + 0x40),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_parent_36156e4(iVar1,0,0);
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_0369e8f8 + 0x369e87c);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369e8fc + 0x369e890));
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0369e900 + 0x369e8c8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_0369e904 + 0x369e8d8);
    *(code **)(_UNK_0369e908 + 0x369e8e8) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0369e8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar3,1);
  return;
}

