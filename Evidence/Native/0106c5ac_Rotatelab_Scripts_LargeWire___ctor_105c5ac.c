/* IL2CPP: Rotatelab.Scripts.LargeWire$$.ctor
void Rotatelab_Scripts_LargeWire___ctor (Rotatelab_Scripts_LargeWire_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LargeWire$$.ctor
   void Rotatelab_Scripts_LargeWire___ctor (Rotatelab_Scripts_LargeWire_o* __this, const MethodInfo*
   method); */

int Rotatelab_Scripts_LargeWire___ctor_105c5ac(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_0106c67c + 0x106c5c0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c680 + 0x106c5d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c684 + 0x106c5e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106c688 + 0x106c5ec));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_0106c68c + 0x106c604);
  uVar1 = FUN_00ec388c(*puVar3,3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080();
  uVar1 = FUN_00ec388c(*puVar3,3);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  thunk_FUN_00ec5080();
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106c690 + 0x106c640));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_0106c694 + 0x106c654));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar1);
  return param_1;
}

