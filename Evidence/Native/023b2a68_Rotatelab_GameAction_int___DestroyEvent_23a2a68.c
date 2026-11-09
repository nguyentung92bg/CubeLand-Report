/* IL2CPP: Rotatelab.GameAction<int>$$DestroyEvent
void Rotatelab_GameAction_int___DestroyEvent (Rotatelab_GameAction_int__o* __this, const MethodInfo_23A2A68* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameAction<int>$$DestroyEvent
   void Rotatelab_GameAction_int___DestroyEvent (Rotatelab_GameAction_int__o* __this, const
   MethodInfo_23A2A68* method); */

void Rotatelab_GameAction_int___DestroyEvent_23a2a68(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 8);
  *puVar3 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

