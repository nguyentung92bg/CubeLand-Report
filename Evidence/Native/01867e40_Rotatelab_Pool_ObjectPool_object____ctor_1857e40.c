/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$.ctor
void Rotatelab_Pool_ObjectPool_object____ctor (Rotatelab_Pool_ObjectPool_T__o* __this, const MethodInfo_1857E40* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$.ctor
   void Rotatelab_Pool_ObjectPool_object____ctor (Rotatelab_Pool_ObjectPool_T__o* __this, const
   MethodInfo_1857E40* method); */

int Rotatelab_Pool_ObjectPool_object____ctor_1857e40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  *(undefined2 *)(param_1 + 0x1c) = 0x101;
  iVar1 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 100;
  *(undefined4 *)(param_1 + 0x18) = 5000;
  if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x20) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar2 = thunk_FUN_00f00cdc();
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar2,0x80,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x44));
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

