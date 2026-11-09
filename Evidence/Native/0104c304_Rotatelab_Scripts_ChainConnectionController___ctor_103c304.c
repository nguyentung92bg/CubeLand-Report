/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$.ctor
void Rotatelab_Scripts_ChainConnectionController___ctor (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$.ctor
   void Rotatelab_Scripts_ChainConnectionController___ctor
   (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_ChainConnectionController___ctor_103c304(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0104c3c0 + 0x104c318);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c3c4 + 0x104c32c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104c3c8 + 0x104c338));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_0104c3cc + 0x104c35c);
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  uVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 5;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3dcccccd;
  uVar2 = thunk_FUN_00f00cdc(uVar2);
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_0104c3d0 + 0x104c38c));
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x44),uVar2);
  *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
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

