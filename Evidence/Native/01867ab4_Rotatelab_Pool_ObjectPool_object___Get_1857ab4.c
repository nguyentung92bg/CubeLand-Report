/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$Get
Il2CppObject* Rotatelab_Pool_ObjectPool_object___Get (Rotatelab_Pool_ObjectPool_T__o* __this, const MethodInfo_1857AB4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$Get
   Il2CppObject* Rotatelab_Pool_ObjectPool_object___Get (Rotatelab_Pool_ObjectPool_T__o* __this,
   const MethodInfo_1857AB4* method); */

undefined4 Rotatelab_Pool_ObjectPool_object___Get_1857ab4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  if (param_1[9] != 0) {
    UnityEngine_AsyncInstantiateOperation__WaitForCompletion_35f9f90();
  }
  if (param_1[8] != 0) {
    iVar1 = System_Collections_Generic_Stack_object___TryPop_1b04e74
                      (param_1[8],&uStack_1c,
                       *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x28));
    if (iVar1 == 0) {
      uStack_1c = Rotatelab_Pool_ObjectPool_object___CreateInstance_1857c40
                            (param_1,*(undefined4 *)
                                      (*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x30));
    }
    (**(code **)(*param_1 + 0xf0))(param_1,uStack_1c,*(undefined4 *)(*param_1 + 0xf4));
    return uStack_1c;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

