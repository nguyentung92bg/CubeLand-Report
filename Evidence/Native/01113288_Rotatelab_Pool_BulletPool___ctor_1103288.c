/* IL2CPP: Rotatelab.Pool.BulletPool$$.ctor
void Rotatelab_Pool_BulletPool___ctor (Rotatelab_Pool_BulletPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.BulletPool$$.ctor
   void Rotatelab_Pool_BulletPool___ctor (Rotatelab_Pool_BulletPool_o* __this, const MethodInfo*
   method); */

int Rotatelab_Pool_BulletPool___ctor_1103288(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01113324 + 0x111329c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113328 + 0x11132b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111332c + 0x11132bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113330 + 0x11132c8));
    *pcVar4 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01113334 + 0x11132dc));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,0x100,**(undefined4 **)(_UNK_01113338 + 0x11132f4));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar1);
  iVar3 = **(int **)(_UNK_0111333c + 0x1113318);
  *(undefined2 *)(param_1 + 0x1c) = 0x101;
  iVar2 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 100;
  *(undefined4 *)(param_1 + 0x18) = 5000;
  if ((*(ushort *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x20) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar1 = thunk_FUN_00f00cdc();
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar1,0x80,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x44));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar1);
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

