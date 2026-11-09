/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$.ctor
void Rotatelab_Pool_WoodPlankShatterPool___ctor (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$.ctor
   void Rotatelab_Pool_WoodPlankShatterPool___ctor (Rotatelab_Pool_WoodPlankShatterPool_o* __this,
   const MethodInfo* method); */

int Rotatelab_Pool_WoodPlankShatterPool___ctor_11051f0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_01115344 + 0x1115204);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115348 + 0x1115218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111534c + 0x1115224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115350 + 0x1115230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115354 + 0x111523c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115358 + 0x1115248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111535c + 0x1115254));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_01115360 + 0x1115270);
  *(undefined4 *)(param_1 + 0x14) = 8;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_01115364 + 0x111528c);
  System_Collections_Generic_List_object____ctor_267d274(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Collections_Generic_List_object____ctor_267d274(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01115368 + 0x11152d0));
  System_Collections_Generic_Dictionary_object__float____ctor_206ffa8
            (uVar1,**(undefined4 **)(_UNK_0111536c + 0x11152e4));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01115370 + 0x1115308));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (uVar1,**(undefined4 **)(_UNK_01115374 + 0x111531c));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

