/* IL2CPP: Rotatelab.Debugging.TestUserManager.<>c__DisplayClass16_0$$<CheckIfTestUser>b__0
bool Rotatelab_Debugging_TestUserManager___c__DisplayClass16_0___CheckIfTestUser_b__0 (Rotatelab_Debugging_TestUserManager___c__DisplayClass16_0_o* __this, System_String_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Debugging.TestUserManager.<>c__DisplayClass16_0$$<CheckIfTestUser>b__0
   bool Rotatelab_Debugging_TestUserManager___c__DisplayClass16_0___CheckIfTestUser_b__0
   (Rotatelab_Debugging_TestUserManager___c__DisplayClass16_0_o* __this, System_String_o* e, const
   MethodInfo* method); */

undefined4
Rotatelab_Debugging_TestUserManager___c__DisplayClass16_0___CheckIfTestUser_b__0_110f96c
          (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__Split_2a0df50(param_2,0x2a,0,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == iVar2) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((iVar1 != 0 && iVar2 != 0) && (uVar4 = *(uint *)(iVar1 + 8), uVar4 == *(uint *)(iVar2 + 8)))
    {
      uVar3 = System_SpanHelpers__SequenceEqual_2b865c4
                        (iVar1 + 0xc,iVar2 + 0xc,uVar4 << 1,
                         ((int)uVar4 >> 0x1f) << 1 | uVar4 >> 0x1f,0);
      return uVar3;
    }
  }
  return uVar3;
}

