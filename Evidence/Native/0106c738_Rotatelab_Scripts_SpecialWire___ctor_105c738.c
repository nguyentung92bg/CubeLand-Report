/* IL2CPP: Rotatelab.Scripts.SpecialWire$$.ctor
void Rotatelab_Scripts_SpecialWire___ctor (Rotatelab_Scripts_SpecialWire_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SpecialWire$$.ctor
   void Rotatelab_Scripts_SpecialWire___ctor (Rotatelab_Scripts_SpecialWire_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_SpecialWire___ctor_105c738(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_0106c888 + 0x106c74c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c88c + 0x106c760));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c890 + 0x106c76c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c894 + 0x106c778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c898 + 0x106c784));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c89c + 0x106c790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c8a0 + 0x106c79c));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_0106c8a4 + 0x106c7b4);
  uVar1 = FUN_00ec388c(*puVar3,3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  thunk_FUN_00ec5080();
  uVar1 = FUN_00ec388c(*puVar3,3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080();
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106c8a8 + 0x106c7f0));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_0106c8ac + 0x106c804));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106c8b0 + 0x106c828));
  System_Collections_Generic_List_int____ctor_261b0bc
            (uVar1,**(undefined4 **)(_UNK_0106c8b4 + 0x106c83c));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0106c8b8 + 0x106c864),3);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  thunk_FUN_00ec5080();
  return param_1;
}

