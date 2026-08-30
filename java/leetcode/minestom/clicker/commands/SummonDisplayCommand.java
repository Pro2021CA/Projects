package commands;

import net.minestom.server.command.builder.Command;
import net.minestom.server.coordinate.Vec;
import net.minestom.server.entity.Entity;
import net.minestom.server.entity.EntityType;
import net.minestom.server.entity.Player;
import net.minestom.server.entity.metadata.display.ItemDisplayMeta;
import net.minestom.server.entity.metadata.other.InteractionMeta;
import net.minestom.server.item.ItemStack;
import net.minestom.server.item.Material;


public class SummonDisplayCommand extends Command {
    public SummonDisplayCommand(){
        super("summondisplay");

        setDefaultExecutor((commandSender, commandContext) -> {
            Player p = (Player) commandSender;
            Entity display = new Entity(EntityType.ITEM_DISPLAY);
            display.setInstance(p.getInstance(), p.getPosition());
            ItemDisplayMeta meta = (ItemDisplayMeta) display.getEntityMeta();
            meta.setItemStack(ItemStack.of(Material.DIAMOND));

            Entity interact = new Entity(EntityType.INTERACTION);
            interact.setInstance(p.getInstance(), p.getPosition().add(0, 1.5, 0));
            InteractionMeta interactionMeta = (InteractionMeta) interact.getEntityMeta();
            interact.addPassenger(display);
            interactionMeta.setHeight(3);
            interactionMeta.setWidth(3);
            meta.setScale(new Vec(4, 4, 4));
        });
    }
}
