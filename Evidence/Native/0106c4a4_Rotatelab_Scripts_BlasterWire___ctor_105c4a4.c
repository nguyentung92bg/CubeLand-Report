/* IL2CPP: Rotatelab.Scripts.BlasterWire$$.ctor
void Rotatelab_Scripts_BlasterWire___ctor (Rotatelab_Scripts_BlasterWire_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterWire$$.ctor
   void Rotatelab_Scripts_BlasterWire___ctor (Rotatelab_Scripts_BlasterWire_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_BlasterWire___ctor_105c4a4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_0106c548 + 0x106c4b8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c54c + 0x106c4cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c550 + 0x106c4d8));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_0106c554 + 0x106c4ec);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_0106c558 + 0x106c500);
  System_Collections_Generic_List_int____ctor_261b0bc(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Collections_Generic_List_int____ctor_261b0bc(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar1);
  return param_1;
}

