/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$Get
Rotatelab_Pool_PooledObject_T__o Rotatelab_Pool_CollectionPool_object___Get (Rotatelab_Pool_CollectionPool_T__o* __this, Il2CppObject** v, const MethodInfo_1E89FE0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$Get
   Rotatelab_Pool_PooledObject_T__o Rotatelab_Pool_CollectionPool_object___Get
   (Rotatelab_Pool_CollectionPool_T__o* __this, Il2CppObject** v, const MethodInfo_1E89FE0* method);
    */

void Rotatelab_Pool_CollectionPool_object___Get_1e89fe0
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Rotatelab_Pool_CollectionPool_object___Get_1e89f7c
                    (param_2,*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x24));
  *param_3 = uVar1;
  thunk_FUN_00ec5080(param_3,uVar1);
  iVar2 = *(int *)(param_4 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  Rotatelab_Pool_PooledObject_object____ctor_186ffa0
            (param_1,uVar1,param_2,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x2c));
  return;
}

