/* IL2CPP: Rotatelab.Pool.DictionaryPool.<>c<Int32Enum, int>$$<.cctor>b__4_0
void Rotatelab_Pool_DictionaryPool___c_Int32Enum__int_____cctor_b__4_0 (Rotatelab_Pool_DictionaryPool___c_T__Y__o* __this, System_Collections_Generic_Dictionary_T__Y__o* e, const MethodInfo_1770828* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.DictionaryPool.<>c<Int32Enum, int>$$<.cctor>b__4_0
   void Rotatelab_Pool_DictionaryPool___c_Int32Enum__int_____cctor_b__4_0
   (Rotatelab_Pool_DictionaryPool___c_T__Y__o* __this,
   System_Collections_Generic_Dictionary_T__Y__o* e, const MethodInfo_1770828* method); */

void Rotatelab_Pool_DictionaryPool___c_Int32Enum__int_____cctor_b__4_0_1770828
               (undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (0 < iVar1) {
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(param_2,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x10));
    }
    System_Array__Clear_2b96cdc(iVar2,0,*(undefined4 *)(iVar2 + 0xc),0);
    *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    System_Array__Clear_2b96cdc(*(undefined4 *)(param_2 + 0xc),0,iVar1,0);
  }
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return;
}

