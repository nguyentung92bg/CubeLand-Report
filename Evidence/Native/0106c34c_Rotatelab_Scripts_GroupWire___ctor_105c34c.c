/* IL2CPP: Rotatelab.Scripts.GroupWire$$.ctor
void Rotatelab_Scripts_GroupWire___ctor (Rotatelab_Scripts_GroupWire_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GroupWire$$.ctor
   void Rotatelab_Scripts_GroupWire___ctor (Rotatelab_Scripts_GroupWire_o* __this, const MethodInfo*
   method); */

int Rotatelab_Scripts_GroupWire___ctor_105c34c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0106c3d0 + 0x106c360);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c3d4 + 0x106c374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c3d8 + 0x106c380));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106c3dc + 0x106c394));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_0106c3e0 + 0x106c3a8));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  return param_1;
}

