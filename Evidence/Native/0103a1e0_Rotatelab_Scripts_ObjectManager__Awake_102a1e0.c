/* IL2CPP: Rotatelab.Scripts.ObjectManager$$Awake
void Rotatelab_Scripts_ObjectManager__Awake (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$Awake
   void Rotatelab_Scripts_ObjectManager__Awake (Rotatelab_Scripts_ObjectManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__Awake_102a1e0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0103a4dc + 0x103a1f4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4e0 + 0x103a208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4e4 + 0x103a214));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4e8 + 0x103a220));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4ec + 0x103a22c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4f0 + 0x103a238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4f4 + 0x103a244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4f8 + 0x103a250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a4fc + 0x103a25c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a500 + 0x103a268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a504 + 0x103a274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a508 + 0x103a280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a50c + 0x103a28c));
    *pcVar5 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_0103a510 + 0x103a2a0));
  iVar3 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  thunk_FUN_00ec5080();
  piVar7 = *(int **)(_UNK_0103a514 + 0x103a2e8);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103a518 + 0x103a30c));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0103a51c + 0x103a32c),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828
                    (uVar6,uVar4,**(undefined4 **)(_UNK_0103a520 + 0x103a344));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x10) = uVar4;
  thunk_FUN_00ec5080();
  puVar8 = *(undefined4 **)(_UNK_0103a524 + 0x103a374);
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0103a528 + 0x103a394),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc4);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0103a52c + 0x103a3ec),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc4) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103a530 + 0x103a42c));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0103a534 + 0x103a44c),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar6,uVar4,**(undefined4 **)(_UNK_0103a538 + 0x103a464));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x98);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0103a53c + 0x103a4ac),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x98);
  *puVar8 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

