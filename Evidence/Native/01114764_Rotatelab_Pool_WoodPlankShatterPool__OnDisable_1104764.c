/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$OnDisable
void Rotatelab_Pool_WoodPlankShatterPool__OnDisable (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$OnDisable
   void Rotatelab_Pool_WoodPlankShatterPool__OnDisable (Rotatelab_Pool_WoodPlankShatterPool_o*
   __this, const MethodInfo* method); */

void Rotatelab_Pool_WoodPlankShatterPool__OnDisable_1104764(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01114840 + 0x1114778);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114844 + 0x111478c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114848 + 0x1114798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111484c + 0x11147a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114850 + 0x11147b0));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01114854 + 0x11147c4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x6c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01114858 + 0x11147e8));
  System_Action_Int32Enum__Vector3__Quaternion__float____ctor_1f1b7d4
            (uVar4,param_1,**(undefined4 **)(_UNK_0111485c + 0x1114808),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__Vector3__Quaternion__float___op_Subtraction_23a7104
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01114860 + 0x1114820));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x6c);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

