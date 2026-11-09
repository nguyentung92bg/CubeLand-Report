/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnDisable
void Rotatelab_Scripts_ObjectShadowController__OnDisable (Rotatelab_Scripts_ObjectShadowController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnDisable
   void Rotatelab_Scripts_ObjectShadowController__OnDisable
   (Rotatelab_Scripts_ObjectShadowController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectShadowController__OnDisable_1030070(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010401c4 + 0x1040084);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010401c8 + 0x1040098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010401cc + 0x10400a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010401d0 + 0x10400b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010401d4 + 0x10400bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010401d8 + 0x10400c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010401dc + 0x10400d4));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010401e0 + 0x10400e8);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010401e4 + 0x104010c));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_010401e8 + 0x104012c),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010401ec + 0x1040144));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010401f0 + 0x1040174));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010401f4 + 0x1040194),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
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

