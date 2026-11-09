/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$.ctor
void Rotatelab_Boosters_CannonBoosterController___ctor (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$.ctor
   void Rotatelab_Boosters_CannonBoosterController___ctor
   (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method); */

int Rotatelab_Boosters_CannonBoosterController___ctor_1136758(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01146898 + 0x114676c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114689c + 0x1146780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011468a0 + 0x114678c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011468a4 + 0x1146798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011468a8 + 0x11467a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011468ac + 0x11467b0));
    *pcVar5 = '\x01';
  }
  uVar2 = _UNK_01146890;
  uVar1 = _UNK_01146888;
  puVar3 = *(undefined4 **)(_UNK_011468b0 + 0x11467dc);
  *(undefined4 *)(param_1 + 0x28) = 0x40400000;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  uVar4 = *puVar3;
  *(undefined4 *)(param_1 + 0x24) = 0xc1a00000;
  uVar4 = thunk_FUN_00f00cdc(uVar4);
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar4,9,**(undefined4 **)(_UNK_011468b4 + 0x1146804));
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar4);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011468b8 + 0x1146828));
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor_1ff907c
            (uVar4,9,**(undefined4 **)(_UNK_011468bc + 0x1146840));
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),uVar4);
  if (*(int *)(**(int **)(_UNK_011468c0 + 0x1146864) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

