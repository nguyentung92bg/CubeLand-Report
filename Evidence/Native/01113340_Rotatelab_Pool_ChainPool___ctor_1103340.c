/* IL2CPP: Rotatelab.Pool.ChainPool$$.ctor
void Rotatelab_Pool_ChainPool___ctor (Rotatelab_Pool_ChainPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ChainPool$$.ctor
   void Rotatelab_Pool_ChainPool___ctor (Rotatelab_Pool_ChainPool_o* __this, const MethodInfo*
   method); */

int Rotatelab_Pool_ChainPool___ctor_1103340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01113388 + 0x1113354);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111338c + 0x1113368));
    *pcVar4 = '\x01';
  }
  iVar3 = **(int **)(_UNK_01113390 + 0x111337c);
  *(undefined2 *)(param_1 + 0x1c) = 0x101;
  iVar1 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 100;
  *(undefined4 *)(param_1 + 0x18) = 5000;
  if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x20) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar2 = thunk_FUN_00f00cdc();
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar2,0x80,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x44));
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar2);
  pcVar4 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

