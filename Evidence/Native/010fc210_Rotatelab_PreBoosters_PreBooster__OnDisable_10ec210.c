/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnDisable
void Rotatelab_PreBoosters_PreBooster__OnDisable (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnDisable
   void Rotatelab_PreBoosters_PreBooster__OnDisable (Rotatelab_PreBoosters_PreBooster_o* __this,
   const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__OnDisable_10ec210(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010fc364 + 0x10fc224);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc368 + 0x10fc238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc36c + 0x10fc244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc370 + 0x10fc250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc374 + 0x10fc25c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc378 + 0x10fc268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc37c + 0x10fc274));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010fc380 + 0x10fc288);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xb0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fc384 + 0x10fc2ac));
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_010fc388 + 0x10fc2cc),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010fc38c + 0x10fc2e4));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb0) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb8);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fc390 + 0x10fc314));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010fc394 + 0x10fc334),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb8);
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

