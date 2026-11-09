/* IL2CPP: Rotatelab.Scripts.SolveRequest$$.ctor
void Rotatelab_Scripts_SolveRequest___ctor (Rotatelab_Scripts_SolveRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SolveRequest$$.ctor
   void Rotatelab_Scripts_SolveRequest___ctor (Rotatelab_Scripts_SolveRequest_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_SolveRequest___ctor_105bca0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0106bd24 + 0x106bcb4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bd28 + 0x106bcc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bd2c + 0x106bcd4));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106bd30 + 0x106bce8));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_0106bd34 + 0x106bcfc));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar1);
  return param_1;
}

