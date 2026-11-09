/* IL2CPP: Rotatelab.Pool.HashSetPool.<>c<object>$$<.cctor>b__4_0
void Rotatelab_Pool_HashSetPool___c_object_____cctor_b__4_0 (Rotatelab_Pool_HashSetPool___c_T__o* __this, System_Collections_Generic_HashSet_T__o* e, const MethodInfo_1764184* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.HashSetPool.<>c<object>$$<.cctor>b__4_0
   void Rotatelab_Pool_HashSetPool___c_object_____cctor_b__4_0 (Rotatelab_Pool_HashSetPool___c_T__o*
   __this, System_Collections_Generic_HashSet_T__o* e, const MethodInfo_1764184* method); */

void Rotatelab_Pool_HashSetPool___c_object_____cctor_b__4_0_1764184(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0 < *(int *)(param_2 + 0x14)) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(param_2 + 0xc),0,*(int *)(param_2 + 0x14),0);
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Array__Clear_2b96cdc(iVar1,0,*(undefined4 *)(iVar1 + 0xc),0);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  }
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  return;
}

