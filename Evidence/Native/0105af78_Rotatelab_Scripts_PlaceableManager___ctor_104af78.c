/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$.ctor
void Rotatelab_Scripts_PlaceableManager___ctor (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$.ctor
   void Rotatelab_Scripts_PlaceableManager___ctor (Rotatelab_Scripts_PlaceableManager_o* __this,
   const MethodInfo* method); */

int Rotatelab_Scripts_PlaceableManager___ctor_104af78(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0105b140 + 0x105af8c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b144 + 0x105afa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b148 + 0x105afac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b14c + 0x105afb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b150 + 0x105afc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b154 + 0x105afd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b158 + 0x105afdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b15c + 0x105afe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b160 + 0x105aff4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b164 + 0x105b000));
    *pcVar4 = '\x01';
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105b168 + 0x105b014));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_0105b16c + 0x105b028));
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x90),uVar2);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 3;
  uVar1 = _UNK_0105b138;
  puVar3 = *(undefined4 **)(_UNK_0105b170 + 0x105b068);
  *(undefined8 *)(param_1 + 0x94) = _UNK_0105b130;
  *(undefined8 *)(param_1 + 0x9c) = uVar1;
  uVar2 = *puVar3;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  uVar2 = thunk_FUN_00f00cdc(uVar2);
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar2,0x80,**(undefined4 **)(_UNK_0105b174 + 0x105b088));
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xb4),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105b178 + 0x105b0ac));
  System_Collections_Generic_HashSet_object____ctor_241f6dc
            (uVar2,0x80,**(undefined4 **)(_UNK_0105b17c + 0x105b0c4));
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xb8),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105b180 + 0x105b0e8));
  System_Collections_Generic_Queue_object____ctor_18fc494
            (uVar2,**(undefined4 **)(_UNK_0105b184 + 0x105b0fc));
  *(undefined4 *)(param_1 + 200) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 200),uVar2);
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

